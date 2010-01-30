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

/**
 * @file modulesrc/problems/SolverLumped.hh
 *
 * @brief Python interface to abstract base class SolverLumped.
 */

namespace pylith {
  namespace problems {

    class SolverLumped
    { // SolverLumped

      // PUBLIC MEMBERS /////////////////////////////////////////////////
    public :

      /// Constructor.
      SolverLumped(void);

      /// Destructor
      ~SolverLumped(void);

      /// Deallocate PETSc and local data structures.
      void deallocate(void);

      /** Initialize solver.
       *
       * @param fields Solution fields.
       * @param jacobian Jacobian of system.
       * @param formulation Formulation of system of equations.
       */
      void
      initialize(const pylith::topology::SolutionFields& fields,
		 const pylith::topology::Field<pylith::topology::Mesh>& jacobian,
		 Formulation* const formulation);
      
      /** Solve the system.
       *
       * @param solution Solution field.
       * @param jacobian Jacobian of the system.
       * @param residual Residual field.
       */
      void solve(pylith::topology::Field<pylith::topology::Mesh>* solution,
		 const pylith::topology::Field<pylith::topology::Mesh>& jacobian,
		 const pylith::topology::Field<pylith::topology::Mesh>& residual);
      
    }; // SolverLumped

  } // problems
} // pylith


// End of file 
