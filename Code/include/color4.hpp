/// @file

#ifndef color4_hpp
#define color4_hpp

  #include "neutrino.hpp"
  #include "kernel.hpp"
  #include "queue.hpp"

  ////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////// "COLOR4" CLASS ///////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  class color4
  {
    private:
      neutrino*           baseline;                                             // Neutrino baseline.

      // OpenCL error get function:
      const char*         get_error     (
                                          cl_int      loc_error                 // Error code.
                                        );

      // OpenCL error check function:
      void                check_error   (
                                          cl_int      loc_error                 // Error code.
                                        );

      cl_context          opencl_context;                                       // OpenCL context.

    public:
      GLfloat*            data;                                                 // Wrapped data.

      GLsizeiptr          size;                                                 // Data size.
      cl_mem              buffer;                                               // OpenGL data memory buffer.
      GLuint              vbo;                                                  // OpenGL data VBO.

                          color4();

      // Initialization:
      void                init          (
                                          neutrino*   loc_baseline,             // Neutrino baseline.
                                          kernel*     loc_kernel,               // OpenCL kernel.
                                          cl_uint     loc_kernel_arg,           // OpenCL kernel argument #.
                                          GLsizeiptr  loc_data_size             // Data number.
                                        );

      // "r" set function:
      void                set_r         (
                                          GLsizeiptr  loc_index,                // Data index.
                                          GLfloat     loc_value                 // Data value.
                                        );

      // "g" set function:
      void                set_g         (
                                          GLsizeiptr  loc_index,                // Data index.
                                          GLfloat     loc_value                 // Data value.
                                        );

      // "b" set function:
      void                set_b         (
                                          GLsizeiptr  loc_index,                // Data index.
                                          GLfloat     loc_value                 // Data value.
                                        );

      // "a" set function:
      void                set_a         (
                                          GLsizeiptr  loc_index,                // Data index.
                                          GLfloat     loc_value                 // Data value.
                                        );

      // "r" get function:
      GLfloat             get_r         (
                                          GLsizeiptr  loc_index                 // Data index.
                                        );

      // "g" get function:
      GLfloat             get_g         (
                                          GLsizeiptr  loc_index                 // Data index.
                                        );

      // "b" get function:
      GLfloat             get_b         (
                                          GLsizeiptr  loc_index                 // Data index.
                                        );

      // "a" get function:
      GLfloat             get_a         (
                                          GLsizeiptr  loc_index                 // Data index.
                                        );

      // OpenCL write buffer function:
      void                write         (
                                          queue*    loc_queue,                  // OpenCL queue.
                                          kernel*   loc_kernel,                 // OpenCL kernel.
                                          cl_uint   loc_kernel_arg              // OpenCL kernel argument index.
                                        );

      // OpenCL read buffer function:
      void                read          (
                                          queue*    loc_queue,                  // OpenCL queue.
                                          kernel*   loc_kernel,                 // OpenCL kernel.
                                          cl_uint   loc_kernel_arg              // OpenCL kernel argument index.
                                        );

      // OpenCL acquire buffer function:
      void                acquire_gl    (
                                          queue*  loc_queue,                    // Queue.
                                          kernel* loc_kernel,                   // Kernel.
                                          cl_uint loc_kernel_arg                // Kernel argument index.
                                        );

      // OpenCL release buffer function:
      void                release_gl    (
                                          queue*  loc_queue,                    // Queue.
                                          kernel* loc_kernel,                   // Kernel.
                                          cl_uint loc_kernel_arg                // Kernel argument index.
                                        );

                          ~color4();
  };

#endif