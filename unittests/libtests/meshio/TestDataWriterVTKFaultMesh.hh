// -*- C++ -*-
//
// ----------------------------------------------------------------------
//
//                           Brad T. Aagaard
//                        U.S. Geological Survey
//
// {LicenseText}
//
// ----------------------------------------------------------------------
//

/**
 * @file unittests/libtests/meshio/TestDataWriterVTKFaultMesh.hh
 *
 * @brief C++ TestDataWriterVTKFaultMesh object
 *
 * C++ unit testing for DataWriterVTKFaultMesh.
 */

#if !defined(pylith_meshio_testdatawritervtkfaultmesh_hh)
#define pylith_meshio_testdatawritervtkfaultmesh_hh

#include "TestDataWriterVTK.hh"

/// Namespace for pylith package
namespace pylith {
  namespace meshio {
    class TestDataWriterVTKFaultMesh;
  } // meshio
} // pylith

/// C++ unit testing for DataWriterVTK
class pylith::meshio::TestDataWriterVTKFaultMesh : public TestDataWriterVTK
{ // class TestDataWriterVTKFaultMesh

  // PROTECTED MEMBERS //////////////////////////////////////////////////
protected :

  /// Initialize mesh.
  void _initialize(void);

  // PROTECTED MEMBERS //////////////////////////////////////////////////
protected :

  ALE::Obj<Mesh> _meshDomain; ///< Mesh for domain.

}; // class TestDataWriterVTKFaultMesh

#endif // pylith_meshio_testdatawritervtkfaultmesh_hh


// End of file 
