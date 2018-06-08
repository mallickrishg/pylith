// -*- C++ -*-
//
// ======================================================================
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2016 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

/**
 * @file libsrc/meshio/OutputMaterial.hh
 *
 * @brief C++ object for managing output of the solution over the domain.
 */

#if !defined(pylith_meshio_outputmaterial_hh)
#define pylith_meshio_outputmaterial_hh

// Include directives ---------------------------------------------------
#include "meshiofwd.hh" // forward declarations

#include "OutputManager.hh" // ISA OutputManager

#include "pylith/utils/array.hh" // HASA string_vector

// OutputMaterial -----------------------------------------------------
/** @brief C++ object for managing output of the solution over the domain.
 */
class pylith::meshio::OutputMaterial : public OutputManager {
    friend class TestOutputMaterial;   // unit testing

    // PUBLIC METHODS ///////////////////////////////////////////////////////
public:

    /// Constructor
    OutputMaterial(void);

    /// Destructor
    ~OutputMaterial(void);

    /// Deallocate PETSc and local data structures.
    void deallocate(void);

    /** Verify configuration.
     *
     * @param[in] solution Solution field.
     */
    void verifyConfiguration(const pylith::topology::Field& solution) const;

    // PROTECTED MEMBERS ////////////////////////////////////////////////////
protected:

    /** Write solution at time step.
     *
     * @param[in] t Current time.
     * @param[in] tindex Current time step.
     * @param[in] solution Solution at time t.
     */
    void _writeDataStep(const PylithReal t,
                        const PylithInt tindex,
                        const pylith::topology::Field& solution);

    // PRIVATE MEMBERS //////////////////////////////////////////////////////
private:

    static const char* _pyreComponent; ///< Name of Pyre component.

    // NOT IMPLEMENTED //////////////////////////////////////////////////////
private:

    OutputMaterial(const OutputMaterial&);   ///< Not implemented.
    const OutputMaterial& operator=(const OutputMaterial&);   ///< Not implemented

}; // OutputMaterial

#endif // pylith_meshio_outputmaterial_hh

// End of file
