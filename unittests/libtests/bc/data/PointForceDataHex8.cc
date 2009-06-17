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

/* Mesh: meshHex8.txt
 *
 * Point force BC at vertices 0, 1, 6, 7.
 *
 * Fixed DOF: { 0, 2 }
 *
 * Initial values
 *   0: -0.2, 0.3
 *   1:  0.1, 0.7
 *   6:  0.5, 0.4
 *   7:  3.2, 6.1
 * tref = 0.2
 * Rate of change
 *   +0.4
 */

#include "PointForceDataHex8.hh"

const int pylith::bc::PointForceDataHex8::_id = 0;

const char* pylith::bc::PointForceDataHex8::_label = "bc";

const int pylith::bc::PointForceDataHex8::_numDOF = 3;
const int pylith::bc::PointForceDataHex8::_numForceDOF = 2;
const int pylith::bc::PointForceDataHex8::_forceDOF[] = { 0, 2 };

const int pylith::bc::PointForceDataHex8::_numForcePts = 4;
const int pylith::bc::PointForceDataHex8::_forcePoints[] = { 0, 1, 6, 7 };

const double pylith::bc::PointForceDataHex8::_tRef = 0.2;
const double pylith::bc::PointForceDataHex8::_forceRate = 0.4;
const double pylith::bc::PointForceDataHex8::_forceInitial[] = {
  -0.2, 0.3,
   0.1, 0.7,
   0.5, 0.4,
   3.2, 6.1,
};

const double pylith::bc::PointForceDataHex8::_tResidual = 0.45;
const double pylith::bc::PointForceDataHex8::_residual[] = {
 -0.1, 0.0, 0.4, 
  0.2, 0.0, 0.8, 
  0.0, 0.0, 0.0, 
  0.0, 0.0, 0.0, 
  0.0, 0.0, 0.0, 
  0.0, 0.0, 0.0, 
  0.6, 0.0, 0.5, 
  3.3, 0.0, 6.2, 
  0.0, 0.0, 0.0, 
  0.0, 0.0, 0.0, 
  0.0, 0.0, 0.0, 
  0.0, 0.0, 0.0, 
  };

const char* pylith::bc::PointForceDataHex8::_meshFilename = 
  "data/hex8.mesh";
const char* pylith::bc::PointForceDataHex8::_dbFilename =
  "data/hex8_force.spatialdb";

pylith::bc::PointForceDataHex8::PointForceDataHex8(void)
{ // constructor
  id = _id;
  label = const_cast<char*>(_label);

  numDOF = _numDOF;
  numForceDOF = _numForceDOF;
  forceDOF = const_cast<int*>(_forceDOF);

  numForcePts = _numForcePts;
  forcePoints = const_cast<int*>(_forcePoints);

  tRef = _tRef;
  forceRate = _forceRate;
  forceInitial = const_cast<double*>(_forceInitial);

  tResidual = _tResidual;
  residual = const_cast<double*>(_residual);

  meshFilename = const_cast<char*>(_meshFilename);
  dbFilename = const_cast<char*>(_dbFilename);
} // constructor

pylith::bc::PointForceDataHex8::~PointForceDataHex8(void)
{}


// End of file