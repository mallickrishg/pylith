#!/usr/bin/env python

from Memory import Memory

class Material(Memory):
  """
  Mesh object for holding material memory and performance information.
  """
  def __init__(self, label = '', numCells = 0):
    """
    Constructor.
    """
    self.label  = label
    self.ncells = numCells
    return

  def tabulate(self, memDict):
    """
    Tabulate memory use.
    """
    memDict[self.label] = self.sizeArrow * self.ncells
    return

if __name__ == '__main__':
  print 'Memory:',Material('rock', 35).tabulate()