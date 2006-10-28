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

## @file unittests/libtests/feassemble/data/Quadrature1Din3DLinear.py

## @brief Python application for generating C++ data files for testing
## C++ Quadrature1Din3D object w/linear basis functions.

from Quadrature1DLinear import *

import numpy

# ----------------------------------------------------------------------

# Quadrature1Din3DLinear class
class Quadrature1Din3DLinear(Quadrature1DLinear):
  """
  Python application for generating C++ data files for testing C++
  Quadrature1Din3D object w/linear basis functions.
  """
  
  # PUBLIC METHODS /////////////////////////////////////////////////////
  
  def __init__(self, name="quadrature1din3dlinear"):
    """
    Constructor.
    """
    Quadrature1DLinear.__init__(self, name)
    
    self.numVertices = 2
    self.spaceDim = 3
    self.numCells = 1
    self.cellDim = 1
    self.numCorners = 2
    self.numQuadPts = 1
    
    self.vertices = numpy.array( [[1.0, -1.5, -2.0],
                                  [-0.5, 2.0,  3.0]],
                                 dtype=numpy.float64)
    self.cells = numpy.array( [[0, 1]], dtype=numpy.Int32)
    return
  

# MAIN /////////////////////////////////////////////////////////////////
if __name__ == "__main__":

  app = Quadrature1Din3DLinear()
  app.run()


# End of file 
