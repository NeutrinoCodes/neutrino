#ifndef shader_hpp
#define shader_hpp

#include "neutrino.hpp"

//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// "SHADER" CLASS ////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
class shader
{
private:
  neutrino* baseline;                                                           // Neutrino baseline.
  ////////////////////////////////////////////////////////////////////////////////
  //////////////////////////////// PRIVATE METHODS ///////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  // OpenGL shader compilation:
  GLuint    compile (
                     const char* loc_shader_filename,                           // Shader file name.
                     shader_type loc_shader_type                                // Shader type.
                    );
  // OpenGL shader build:
  GLuint    build (
                   const char* loc_vertex_filename,                             // Vertex shader file name.
                   const char* loc_geometry_filename,                           // Geometry shader file name.
                   const char* loc_fragment_filename                            // Fragment shader file name.
                  );


public:
  GLuint    program;                                                            // OpenGL program.

  ////////////////////////////////////////////////////////////////////////////////
  //////////////////////////////////// CONSTRUCTOR ///////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  shader ();

  ////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////// INIT /////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  void      init (
                  neutrino* loc_baseline                                        // Neutrino baseline.
                 );

////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// DESTRUCTOR ////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
  ~shader ();
#endif
