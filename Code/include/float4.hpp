/// @file

#ifndef float4_hpp
#define float4_hpp

  #include "neutrino.hpp"
  #include "kernel.hpp"
  #include "queue.hpp"

  ////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////// "FLOAT4" CLASS ///////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  class float4
  {
    private:
      neutrino*           baseline;                                             // Neutrino baseline.

      // OpenCL error get function:
      const char*         get_error     (
                                          cl_int      loc_error                 // Local error code.
                                        );

      // OpenCL error check function:
      void                check_error   (
                                          cl_int      loc_error                 // Local error code.
                                        );


      cl_context          opencl_context;                                       // OpenCL context.

    public:
      GLfloat*            x;                                                    // "x" data.
      GLfloat*            y;                                                    // "y" data.
      GLfloat*            z;                                                    // "z" data.
      GLfloat*            w;                                                    // "w" data.

      GLfloat*            data;                                                 // Wrapped data.

      int                 size;                                                 // Data size.
      GLuint              vao;                                                  // OpenGL data VAO.
      GLuint              vbo;                                                  // OpenGL data VBO.
      cl_mem              buffer;                                               // OpenGL data memory buffer.

                          float4();

      // Initialization:
      void                init          (
                                          neutrino* loc_baseline,               // Neutrino baseline.
                                          kernel*   loc_kernel,                 // OpenCL kernel.
                                          int       loc_kernel_arg,             // OpenCL kernel argument #.
                                          int       loc_data_size               // Data number.
                                        );

      void                set_x         (
                                          int       loc_index,                  // Data index.
                                          cl_float  loc_value                   // Data value.
                                        );

      void                set_y         (
                                          int       loc_index,                  // Data index.
                                          cl_float  loc_value                   // Data value.
                                        );

      void                set_z         (
                                          int       loc_index,                  // Data index.
                                          cl_float  loc_value                   // Data value.
                                        );

      void                set_w         (
                                          int       loc_index,                  // Data index.
                                          cl_float  loc_value                   // Data value.
                                        );

      cl_float            get_x         (
                                          int       loc_index                   // Data index.
                                        );

      cl_float            get_y         (
                                          int       loc_index                   // Data index.
                                        );

      cl_float            get_z         (
                                          int       loc_index                   // Data index.
                                        );

      cl_float            get_w         (
                                          int       loc_index                   // Data index.
                                        );

      // Push kernel argument:
      void                enqueue       (
                                          queue*    loc_queue,                  // OpenCL queue.
                                          kernel*   loc_kernel,                 // OpenCL kernel.
                                          int       loc_kernel_arg              // OpenCL kernel argument index.
                                        );

      // Pop kernel argument:
      void                dequeue       (
                                          queue*    loc_queue,                  // OpenCL queue.
                                          kernel*   loc_kernel,                 // OpenCL kernel.
                                          int       loc_kernel_arg              // OpenCL kernel argument index.
                                        );

                          ~float4();
  };

#endif
