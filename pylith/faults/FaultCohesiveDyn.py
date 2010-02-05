#!/usr/bin/env python
#
# ----------------------------------------------------------------------
#
#                           Brad T. Aagaard
#                        U.S. Geological Survey
#
# <LicenseText>
#
# ----------------------------------------------------------------------
#

## @file pylith/faults/FaultCohesiveDyn.py
##

## @brief Python object for a fault surface with dynamic
## (friction) fault implemented with cohesive elements.
##
## Factory: fault

from FaultCohesive import FaultCohesive
from pylith.feassemble.Integrator import Integrator
from faults import FaultCohesiveDyn as ModuleFaultCohesiveDyn

from pylith.utils.NullComponent import NullComponent

# FaultCohesiveDyn class
class FaultCohesiveDyn(FaultCohesive, Integrator, ModuleFaultCohesiveDyn):
  """
  Python object for a fault surface with dynamic (friction) fault
  implemented with cohesive elements.

  Inventory

  @class Inventory
  Python object for managing FaultCohesiveDyn facilities and properties.
  
  \b Properties
  @li None
  
  \b Facilities
  @li \b db_initial_tractions Spatial database for initial tractions.
  @li \b output Output manager associated with fault data.

  Factory: fault
  """

  # INVENTORY //////////////////////////////////////////////////////////

  import pyre.inventory

  db = pyre.inventory.facility("db_initial_tractions", family="spatial_database",
                               factory=NullComponent)
  db.meta['tip'] = "Spatial database for initial tractions."

  from pylith.meshio.OutputFaultDyn import OutputFaultDyn
  output = pyre.inventory.facility("output", family="output_manager",
                                   factory=OutputFaultDyn)
  output.meta['tip'] = "Output manager associated with fault data."
  

  # PUBLIC METHODS /////////////////////////////////////////////////////

  def __init__(self, name="faultcohesivedyn"):
    """
    Initialize configuration.
    """
    FaultCohesive.__init__(self, name)
    Integrator.__init__(self)
    self._loggingPrefix = "CoDy "

    self.availableFields = \
        {'vertex': \
           {'info': [],
            'data': []},
         'cell': \
           {'info': ["normal_dir"],
            'data': ["slip",
                     "traction"]},
}
    return


  def preinitialize(self, mesh):
    """
    Do pre-initialization setup.
    """
    self._info.log("Pre-initializing fault '%s'." % self.label())
    FaultCohesive.preinitialize(self, mesh)
    Integrator.preinitialize(self, mesh)

    ModuleFaultCohesiveDyn.quadrature(self, self.faultQuadrature)

    if mesh.dimension() == 2:
      self.availableFields['cell']['info'] += ["strike_dir"]
    elif mesh.dimension() == 3:
      self.availableFields['cell']['info'] += ["strike_dir",
                                               "dip_dir"]

    if not isinstance(self.inventory.db, NullComponent):
      self.availableFields['cell']['info'] += ["initial_traction"]
    return
  

  def verifyConfiguration(self):
    """
    Verify compatibility of configuration.
    """
    logEvent = "%sverify" % self._loggingPrefix
    self._eventLogger.eventBegin(logEvent)

    FaultCohesive.verifyConfiguration(self)
    Integrator.verifyConfiguration(self)
    ModuleFaultCohesiveDyn.verifyConfiguration(self, self.mesh)

    self._eventLogger.eventEnd(logEvent)
    return


  def initialize(self, totalTime, numTimeSteps, normalizer):
    """
    Initialize cohesive elements.
    """
    logEvent = "%sinit" % self._loggingPrefix
    self._eventLogger.eventBegin(logEvent)
    self._info.log("Initializing fault '%s'." % self.label())

    Integrator.initialize(self, totalTime, numTimeSteps, normalizer)
    
    FaultCohesive.initialize(self, totalTime, numTimeSteps, normalizer)

    self._eventLogger.eventEnd(logEvent)
    return


  def poststep(self, t, dt, totalTime, fields):
    """
    Hook for doing stuff after advancing time step.
    """
    logEvent = "%spoststep" % self._loggingPrefix
    self._eventLogger.eventBegin(logEvent)

    Integrator.poststep(self, t, dt, totalTime, fields)
    FaultCohesive.poststep(self, t, dt, totalTime, fields)

    self._eventLogger.eventEnd(logEvent)
    return


  def getVertexField(self, name, fields=None):
    """
    Get vertex field.
    """
    if None == fields:
      field = ModuleFaultCohesiveDyn.vertexField(self, name)
    else:
      field = ModuleFaultCohesiveDyn.vertexField(self, name, fields)
    return field


  def getCellField(self, name, fields=None):
    """
    Get cell field.
    """
    if None == fields:
      field = ModuleFaultCohesiveDyn.cellField(self, name)
    else:
      field = ModuleFaultCohesiveDyn.cellField(self, name, fields)
    return field


  def finalize(self):
    """
    Cleanup.
    """
    FaultCohesive.finalize(self)
    Integrator.finalize(self)
    return
  

  # PRIVATE METHODS ////////////////////////////////////////////////////

  def _configure(self):
    """
    Setup members using inventory.
    """
    FaultCohesive._configure(self)
    if not isinstance(self.inventory.db, NullComponent):
      ModuleFaultCohesiveDyn.dbInitial(self, self.inventory.db)
    self.output = self.inventory.output
    return


  def _createModuleObj(self):
    """
    Create handle to C++ FaultCohesiveDyn.
    """
    ModuleFaultCohesiveDyn.__init__(self)
    return
    
  
  def _modelMemoryUse(self):
    """
    Model memory allocation.
    """
    self.perfLogger.logFault("Fault", self)
    #self.perfLogger.logFields("Fault", self.fields())
    return


# FACTORIES ////////////////////////////////////////////////////////////

def fault():
  """
  Factory associated with FaultCohesiveDyn.
  """
  return FaultCohesiveDyn()


# End of file 