// -*- C++ -*-
//
// ======================================================================
//
//                           Brad T. Aagaard
//                        U.S. Geological Survey
//
// {LicenseText}
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application integratorelasticitylgdeform.

#include "ElasticityExplicitLgDeformGravData2DQuadratic.hh"

const int pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_spaceDim = 2;

const int pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_cellDim = 2;

const int pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_numVertices = 6;

const int pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_numCells = 1;

const int pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_numBasis = 6;

const int pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_numQuadPts = 6;

const char* pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_matType = "ElasticPlaneStrain";

const char* pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_matDBFilename = "data/elasticplanestrain.spatialdb";

const int pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_matId = 0;

const char* pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_matLabel = "elastic strain 2-D";

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_dt =   1.00000000e-02;

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_gravityVec[] = {
  0.00000000e+00, -1.00000000e+08,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_vertices[] = {
 -1.00000000e+00, -1.00000000e+00,
  1.00000000e+00,  2.00000000e-01,
 -1.50000000e+00,  5.00000000e-01,
 -2.50000000e-01,  3.50000000e-01,
 -1.25000000e+00, -2.50000000e-01,
  0.00000000e+00, -4.00000000e-01,
};

const int pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_cells[] = {
0,1,2,3,4,5,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_verticesRef[] = {
 -1.00000000e+00, -1.00000000e+00,
  1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00,  1.00000000e+00,
  0.00000000e+00,  0.00000000e+00,
 -1.00000000e+00,  0.00000000e+00,
  0.00000000e+00, -1.00000000e+00,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_quadPts[] = {
 -7.50000000e-01, -7.50000000e-01,
  7.50000000e-01, -7.50000000e-01,
 -7.50000000e-01,  7.50000000e-01,
  0.00000000e+00, -7.50000000e-01,
 -7.50000000e-01,  0.00000000e+00,
  2.50000000e-01,  2.50000000e-01,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_quadWts[] = {
  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,  3.33333333e-01,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_basis[] = {
  3.75000000e-01, -9.37500000e-02,
 -9.37500000e-02,  6.25000000e-02,
  3.75000000e-01,  3.75000000e-01,
  0.00000000e+00,  6.56250000e-01,
 -9.37500000e-02,  4.37500000e-01,
 -0.00000000e+00, -0.00000000e+00,
  0.00000000e+00, -9.37500000e-02,
  6.56250000e-01,  4.37500000e-01,
 -0.00000000e+00, -0.00000000e+00,
 -9.37500000e-02,  0.00000000e+00,
 -9.37500000e-02,  2.50000000e-01,
  1.87500000e-01,  7.50000000e-01,
 -9.37500000e-02, -9.37500000e-02,
  0.00000000e+00,  2.50000000e-01,
  7.50000000e-01,  1.87500000e-01,
  3.75000000e-01,  1.56250000e-01,
  1.56250000e-01,  1.56250000e+00,
 -6.25000000e-01, -6.25000000e-01,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_basisDerivRef[] = {
 -1.00000000e+00, -1.00000000e+00,
 -2.50000000e-01,  0.00000000e+00,
  0.00000000e+00, -2.50000000e-01,
  2.50000000e-01,  2.50000000e-01,
 -2.50000000e-01,  1.25000000e+00,
  1.25000000e+00, -2.50000000e-01,
  5.00000000e-01,  5.00000000e-01,
  1.25000000e+00,  0.00000000e+00,
  0.00000000e+00, -2.50000000e-01,
  2.50000000e-01,  1.75000000e+00,
 -2.50000000e-01, -2.50000000e-01,
 -1.75000000e+00, -1.75000000e+00,
  5.00000000e-01,  5.00000000e-01,
 -2.50000000e-01,  0.00000000e+00,
  0.00000000e+00,  1.25000000e+00,
  1.75000000e+00,  2.50000000e-01,
 -1.75000000e+00, -1.75000000e+00,
 -2.50000000e-01, -2.50000000e-01,
 -2.50000000e-01, -2.50000000e-01,
  5.00000000e-01,  0.00000000e+00,
  0.00000000e+00, -2.50000000e-01,
  2.50000000e-01,  1.00000000e+00,
 -2.50000000e-01,  5.00000000e-01,
 -2.50000000e-01, -1.00000000e+00,
 -2.50000000e-01, -2.50000000e-01,
 -2.50000000e-01,  0.00000000e+00,
  0.00000000e+00,  5.00000000e-01,
  1.00000000e+00,  2.50000000e-01,
 -1.00000000e+00, -2.50000000e-01,
  5.00000000e-01, -2.50000000e-01,
  1.00000000e+00,  1.00000000e+00,
  7.50000000e-01,  0.00000000e+00,
  0.00000000e+00,  7.50000000e-01,
  1.25000000e+00,  1.25000000e+00,
 -1.25000000e+00, -1.75000000e+00,
 -1.75000000e+00, -1.25000000e+00,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_fieldTIncr[] = {
 -4.00000000e-01, -6.00000000e-01,
  7.00000000e-01,  8.00000000e-01,
  0.00000000e+00,  2.00000000e-01,
 -5.00000000e-01, -4.00000000e-01,
  3.00000000e-01,  9.00000000e-01,
 -3.00000000e-01, -9.00000000e-01,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_fieldT[] = {
 -3.00000000e-01, -4.00000000e-01,
  5.00000000e-01,  6.00000000e-01,
  0.00000000e+00,  1.00000000e-01,
 -2.00000000e-01, -3.00000000e-01,
  2.00000000e-01,  3.00000000e-01,
 -1.00000000e-01, -2.00000000e-01,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_fieldTmdt[] = {
 -2.00000000e-01, -3.00000000e-01,
  3.00000000e-01,  4.00000000e-01,
  0.00000000e+00, -1.00000000e-01,
 -3.00000000e-01, -2.00000000e-01,
  1.00000000e-01,  4.00000000e-01,
 -2.00000000e-01, -6.00000000e-01,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_valsResidual[] = {
  3.35158253e+10,  3.88286927e+10,
 -7.94924298e+10, -8.36255788e+10,
  2.10014068e+10, -1.83290517e+10,
  7.31028066e+10, -2.31357637e+11,
 -5.42559207e+10, -1.51051145e+11,
  6.13196816e+09, -4.46481142e+09,
};

const double pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::_valsJacobian[] = {
  2.24121094e+06,  0.00000000e+00,
  2.41699219e+05,  0.00000000e+00,
  2.41699219e+05,  0.00000000e+00,
  4.21875000e+06,  0.00000000e+00,
 -1.36230469e+06,  0.00000000e+00,
 -1.36230469e+06,  0.00000000e+00,
  0.00000000e+00,  2.24121094e+06,
  0.00000000e+00,  2.41699219e+05,
  0.00000000e+00,  2.41699219e+05,
  0.00000000e+00,  4.21875000e+06,
  0.00000000e+00, -1.36230469e+06,
  0.00000000e+00, -1.36230469e+06,
  2.41699219e+05,  0.00000000e+00,
  3.61083984e+06,  0.00000000e+00,
 -6.73828125e+05,  0.00000000e+00,
  3.45703125e+06,  0.00000000e+00,
 -1.52343750e+06,  0.00000000e+00,
 -1.12792969e+06,  0.00000000e+00,
  0.00000000e+00,  2.41699219e+05,
  0.00000000e+00,  3.61083984e+06,
  0.00000000e+00, -6.73828125e+05,
  0.00000000e+00,  3.45703125e+06,
  0.00000000e+00, -1.52343750e+06,
  0.00000000e+00, -1.12792969e+06,
  2.41699219e+05,  0.00000000e+00,
 -6.73828125e+05,  0.00000000e+00,
  3.61083984e+06,  0.00000000e+00,
  3.45703125e+06,  0.00000000e+00,
 -1.12792969e+06,  0.00000000e+00,
 -1.52343750e+06,  0.00000000e+00,
  0.00000000e+00,  2.41699219e+05,
  0.00000000e+00, -6.73828125e+05,
  0.00000000e+00,  3.61083984e+06,
  0.00000000e+00,  3.45703125e+06,
  0.00000000e+00, -1.12792969e+06,
  0.00000000e+00, -1.52343750e+06,
  4.21875000e+06,  0.00000000e+00,
  3.45703125e+06,  0.00000000e+00,
  3.45703125e+06,  0.00000000e+00,
  2.21484375e+07,  0.00000000e+00,
 -5.39062500e+06,  0.00000000e+00,
 -5.39062500e+06,  0.00000000e+00,
  0.00000000e+00,  4.21875000e+06,
  0.00000000e+00,  3.45703125e+06,
  0.00000000e+00,  3.45703125e+06,
  0.00000000e+00,  2.21484375e+07,
  0.00000000e+00, -5.39062500e+06,
  0.00000000e+00, -5.39062500e+06,
 -1.36230469e+06,  0.00000000e+00,
 -1.52343750e+06,  0.00000000e+00,
 -1.12792969e+06,  0.00000000e+00,
 -5.39062500e+06,  0.00000000e+00,
  8.46679688e+06,  0.00000000e+00,
  6.09375000e+06,  0.00000000e+00,
  0.00000000e+00, -1.36230469e+06,
  0.00000000e+00, -1.52343750e+06,
  0.00000000e+00, -1.12792969e+06,
  0.00000000e+00, -5.39062500e+06,
  0.00000000e+00,  8.46679688e+06,
  0.00000000e+00,  6.09375000e+06,
 -1.36230469e+06,  0.00000000e+00,
 -1.12792969e+06,  0.00000000e+00,
 -1.52343750e+06,  0.00000000e+00,
 -5.39062500e+06,  0.00000000e+00,
  6.09375000e+06,  0.00000000e+00,
  8.46679688e+06,  0.00000000e+00,
  0.00000000e+00, -1.36230469e+06,
  0.00000000e+00, -1.12792969e+06,
  0.00000000e+00, -1.52343750e+06,
  0.00000000e+00, -5.39062500e+06,
  0.00000000e+00,  6.09375000e+06,
  0.00000000e+00,  8.46679688e+06,
};

pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::ElasticityExplicitLgDeformGravData2DQuadratic(void)
{ // constructor
  spaceDim = _spaceDim;
  cellDim = _cellDim;
  numVertices = _numVertices;
  numCells = _numCells;
  numBasis = _numBasis;
  numQuadPts = _numQuadPts;
  matType = const_cast<char*>(_matType);
  matDBFilename = const_cast<char*>(_matDBFilename);
  matId = _matId;
  matLabel = const_cast<char*>(_matLabel);
  dt = _dt;
  gravityVec = const_cast<double*>(_gravityVec);
  vertices = const_cast<double*>(_vertices);
  cells = const_cast<int*>(_cells);
  verticesRef = const_cast<double*>(_verticesRef);
  quadPts = const_cast<double*>(_quadPts);
  quadWts = const_cast<double*>(_quadWts);
  basis = const_cast<double*>(_basis);
  basisDerivRef = const_cast<double*>(_basisDerivRef);
  fieldTIncr = const_cast<double*>(_fieldTIncr);
  fieldT = const_cast<double*>(_fieldT);
  fieldTmdt = const_cast<double*>(_fieldTmdt);
  valsResidual = const_cast<double*>(_valsResidual);
  valsJacobian = const_cast<double*>(_valsJacobian);
} // constructor

pylith::feassemble::ElasticityExplicitLgDeformGravData2DQuadratic::~ElasticityExplicitLgDeformGravData2DQuadratic(void)
{}


// End of file