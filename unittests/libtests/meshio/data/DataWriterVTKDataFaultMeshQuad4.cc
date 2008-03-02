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

#include "DataWriterVTKDataFaultMeshQuad4.hh"

#include <assert.h> // USES assert()

const char* pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_meshFilename = 
  "data/quad4.mesh";

const char* pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_faultLabel = 
  "fault";
const int pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_faultId = 100;

const char* pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_timestepFilename = 
  "quad4_fault.vtk";

const char* pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_vertexFilename = 
  "quad4_fault_vertex.vtk";

const char* pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_cellFilename = 
  "quad4_fault_cell.vtk";

const double pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_time = 1.0;

const char* pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_timeFormat = 
  "%3.1f";

const int pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_numVertexFields = 3;
const int pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_numVertices = 2;

const pylith::meshio::DataWriterVTKData::FieldStruct
pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_vertexFields[] = {
  { "displacements", VECTOR_FIELD, 2 },
  { "pressure", SCALAR_FIELD, 1 },
  { "other", OTHER_FIELD, 2 },
};
const double pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_vertexField0[] = {
  1.1, 2.2,
  3.3, 4.4,
};
const double pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_vertexField1[] = {
  2.1, 3.2,
};
const double pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_vertexField2[] = {
  1.2, 2.3,
  3.4, 4.5,
};

const int pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_numCellFields = 3;
const int pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_numCells = 1;

const pylith::meshio::DataWriterVTKData::FieldStruct
pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_cellFields[] = {
  { "traction", VECTOR_FIELD, 2 },
  { "pressure", SCALAR_FIELD, 1 },
  { "other", TENSOR_FIELD, 3 },
};
const double pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_cellField0[] = {
  1.1, 2.2,
};
const double pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_cellField1[] = {
  2.1,
};
const double pylith::meshio::DataWriterVTKDataFaultMeshQuad4::_cellField2[] = {
  1.2, 2.3, 3.4,
};

pylith::meshio::DataWriterVTKDataFaultMeshQuad4::DataWriterVTKDataFaultMeshQuad4(void)
{ // constructor
  meshFilename = const_cast<char*>(_meshFilename);
  faultLabel = const_cast<char*>(_faultLabel);
  faultId = _faultId;

  timestepFilename = const_cast<char*>(_timestepFilename);
  vertexFilename = const_cast<char*>(_vertexFilename);
  cellFilename = const_cast<char*>(_cellFilename);

  time = _time;
  timeFormat = const_cast<char*>(_timeFormat);
  
  numVertexFields = _numVertexFields;
  assert(3 == numVertexFields);
  numVertices = _numVertices;
  vertexFieldsInfo = const_cast<DataWriterVTKData::FieldStruct*>(_vertexFields);
  vertexFields[0] = const_cast<double*>(_vertexField0);
  vertexFields[1] = const_cast<double*>(_vertexField1);
  vertexFields[2] = const_cast<double*>(_vertexField2);

  numCellFields = _numCellFields;
  assert(3 == numCellFields);
  numCells = _numCells;
  cellFieldsInfo = const_cast<DataWriterVTKData::FieldStruct*>(_cellFields);
  cellFields[0] = const_cast<double*>(_cellField0);
  cellFields[1] = const_cast<double*>(_cellField1);
  cellFields[2] = const_cast<double*>(_cellField2);
} // constructor

pylith::meshio::DataWriterVTKDataFaultMeshQuad4::~DataWriterVTKDataFaultMeshQuad4(void)
{}


// End of file
