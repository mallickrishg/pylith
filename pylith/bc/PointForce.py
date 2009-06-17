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

## @file pylith/bc/PointForce.py
##
## @brief Python object for managing a point force boundary condition
## with a set of points.
##
## Factory: boundary_condition

from BoundaryCondition import BoundaryCondition
from TimeDependent import TimeDependent
from pylith.feassemble.Integrator import Integrator
from bc import PointForce as ModulePointForce

# PointForce class
class PointForce(BoundaryCondition, 
                 TimeDependent, 
                 Integrator, 
                 ModulePointForce):
  """
  Python object for managing a point force boundary condition.

  Factory: boundary_condition
  """

  # PUBLIC METHODS /////////////////////////////////////////////////////

  def __init__(self, name="dirichletbc"):
    """
    Constructor.
    """
    BoundaryCondition.__init__(self, name)
    Integrator.__init__(self)
    self._loggingPrefix = "DiBC "
    return


  def preinitialize(self, mesh):
    """
    Do pre-initialization setup.
    """
    BoundaryCondition.preinitialize(self, mesh)
    Integrator.preinitialize(self, mesh)
    return


  def verifyConfiguration(self):
    """
    Verify compatibility of configuration.
    """
    logEvent = "%sverify" % self._loggingPrefix
    self._eventLogger.eventBegin(logEvent)

    BoundaryCondition.verifyConfiguration(self, self.mesh)

    self._eventLogger.eventEnd(logEvent)
    return


  def initialize(self, totalTime, numTimeSteps, normalizer):
    """
    Initialize PointForce boundary condition.
    """
    logEvent = "%sinit" % self._loggingPrefix
    self._eventLogger.eventBegin(logEvent)

    Integrator.initialize(self, totalTime, numTimeSteps, normalizer)
    BoundaryCondition.initialize(self, totalTime, numTimeSteps, normalizer)

    self._eventLogger.eventEnd(logEvent)    
    return
  

  # PRIVATE METHODS ////////////////////////////////////////////////////

  def _configure(self):
    """
    Setup members using inventory.
    """
    BoundaryCondition._configure(self)
    return


  def _createModuleObj(self):
    """
    Create handle to corresponding C++ object.
    """
    ModulePointForce.__init__(self)
    return
  

# FACTORIES ////////////////////////////////////////////////////////////

def boundary_condition():
  """
  Factory associated with PointForce.
  """
  return PointForce()

  
# End of file 