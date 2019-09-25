/// @file   data_classes.hpp
/// @author Erik ZORZIN
/// @date   24OCT2019
/// @brief  This header file contains declarations of classes used for data storage.

#ifndef data_classes_hpp
#define data_classes_hpp

#include "neutrino.hpp"
#include "data_structs.hpp"

/// @class int1
/// ### 1xN vector of "cl_long" data.
/// Defines a 1xN vector (N = data size) of "cl_long" data numbers.
/// To be used to transfer memory between host and client. It does not have bindings for
/// OpenGL/CL interoperability. Not intended for graphics rendering.
class int1
{
private:

public:
  cl_long* data;                                                                                    ///< Data.
  cl_mem   buffer;                                                                                  ///< Data memory buffer.
  size_t   size;                                                                                    ///< Data size.
  cl_uint  layout;                                                                                  ///< Data layout index.
  bool     ready;                                                                                   ///< "ready" flag.

  int1                                                                                              /// Constructor.
    ();
  void init                                                                                         /// Initializer.
  (
   size_t loc_size                                                                                  /// Data size.
  );


  ~int1                                                                                             /// Destructor.
    ();
};

/// @class int2
/// ### 2xN vector of "cl_long" data.
/// Defines a 3xN vector (N = data size) of "cl_long" data numbers.
/// To be used to transfer memory between host and client. It does not have bindings for
/// OpenGL/CL interoperability. Not intended for graphics rendering.
class int2
{
private:

public:
  int2_structure* data;                                                                             ///< Data.
  cl_mem          buffer;                                                                           ///< Data memory buffer.
  size_t          size;                                                                             ///< Data size.
  cl_uint         layout;                                                                           ///< Data layout index.
  bool            ready;                                                                            ///< "ready" flag.

  int2 ();
  void init (
             size_t loc_size                                                                        /// Data size.
            );

  ~int2();
};

/// @class int3
/// ### 3xN vector of "cl_long" data.
/// Defines a 3xN vector (N = data size) of "cl_long" data numbers.
/// To be used to transfer memory between host and client. It does not have bindings for
/// OpenGL/CL interoperability. Not intended for graphics rendering.
class int3
{
private:

public:
  int3_structure* data;                                                                             ///< Data.
  cl_mem          buffer;                                                                           ///< Data memory buffer.
  size_t          size;                                                                             ///< Data size.
  cl_uint         layout;                                                                           ///< Data layout index.
  bool            ready;                                                                            ///< "ready" flag.

  int3 ();
  void init (
             size_t loc_size                                                                        /// Data size.
            );

  ~int3();
};

/// @class int4
/// ### 4xN vector of "cl_long" data.
/// Defines a 4xN vector (N = data size) of "cl_long" data numbers.
/// To be used to transfer memory between host and client. It does not have bindings for
/// OpenGL/CL interoperability. Not intended for graphics rendering.
class int4
{
private:

public:
  int4_structure* data;                                                                             ///< Data structure.
  cl_mem          buffer;                                                                           ///< Data memory buffer.
  size_t          size;                                                                             ///< Data size.
  cl_uint         layout;                                                                           ///< Data layout index.
  bool            ready;                                                                            ///< "ready" flag.

  int4 ();
  void init (
             size_t loc_size                                                                        /// Data size.
            );

  ~int4();
};

/// @class float1
/// ### 1xN vector of "cl_float" data.
/// Defines a 1xN vector (N = data size) of "cl_float" data numbers.
/// To be used to transfer memory between host and client. It does not have bindings for
/// OpenGL/CL interoperability. Not intended for graphics rendering.
class float1
{
private:

public:
  cl_float* data;                                                                                   ///< Data.
  cl_mem    buffer;                                                                                 ///< Data memory buffer.
  size_t    size;                                                                                   ///< Data size.
  cl_uint   layout;                                                                                 ///< Data layout index.
  bool      ready;                                                                                  ///< "ready" flag.

  float1 ();
  void init (
             size_t loc_size                                                                        /// Data size.
            );

  ~float1();
};

/// @class float1G
/// ### 1xN vector of "GLfloat" data.
/// Defines a 1xN vector (N = data size) of "GLfloat" data numbers.
/// To be used to transfer memory between host and client. It has bindings for
/// OpenGL/CL interoperability. Intended for graphics rendering.
class float1G
{
private:

public:
  GLfloat*    data;                                                                                 ///< Data structure.
  cl_mem      buffer;                                                                               ///< Data memory buffer.
  GLuint      vao;                                                                                  ///< Data VAO.
  GLuint      vbo;                                                                                  ///< Data VBO.
  GLsizeiptr  size;                                                                                 ///< Data size.
  GLuint      layout;                                                                               ///< Data layout index.
  std::string name;                                                                                 ///< Data name.
  bool        ready;                                                                                ///< "ready" flag.

  float1G ();
  void init (
             GLsizeiptr loc_size                                                                    /// Data size.
            );

  ~float1G();
};

/// @class float2
/// ### 2xN vector of "cl_float" data.
/// Defines a 2xN vector (N = data size) of "cl_float" data numbers.
/// To be used to transfer memory between host and client. It does not have bindings for
/// OpenGL/CL interoperability. Not intended for graphics rendering.
class float2
{
private:

public:
  float2_structure* data;                                                                           ///< Data.
  cl_mem            buffer;                                                                         ///< Data memory buffer.
  size_t            size;                                                                           ///< Data size.
  cl_uint           layout;                                                                         ///< Data layout index.
  bool              ready;                                                                          ///< "ready" flag.

  float2 ();
  void init (
             size_t loc_size                                                                        /// Data size.
            );

  ~float2();
};

/// @class float3
/// ### 3xN vector of "cl_float" data.
/// Defines a 3xN vector (N = data size) of "cl_float" data numbers.
/// To be used to transfer memory between host and client. It does not have bindings for
/// OpenGL/CL interoperability. Not intended for graphics rendering.
class float3
{
private:

public:
  float3_structure* data;                                                                           ///< Data.
  cl_mem            buffer;                                                                         ///< Data memory buffer.
  size_t            size;                                                                           ///< Data size.
  cl_uint           layout;                                                                         ///< Data layout index.
  bool              ready;                                                                          ///< "ready" flag.

  float3 ();
  void init (
             size_t loc_size                                                                        /// Data size.
            );

  ~float3();
};

/// @class float4
/// ### 4xN vector of "cl_float" data.
/// Defines a 4xN vector (N = data size) of "cl_float" data numbers.
/// To be used to transfer memory between host and client. It does not have bindings for
/// OpenGL/CL interoperability. Not intended for graphics rendering.
class float4
{
private:

public:
  float4_structure* data;                                                                           ///< Data structure.
  cl_mem            buffer;                                                                         ///< Data memory buffer.
  size_t            size;                                                                           ///< Data size.
  cl_uint           layout;                                                                         ///< Data layout index.
  bool              ready;                                                                          ///< "ready" flag.

  float4 ();
  void init (
             size_t loc_size                                                                        /// Data size.
            );

  ~float4();
};

/// @class float4G
/// ### 4xN vector of "GLfloat" data.
/// Defines a 4xN vector (N = data size) of "GLfloat" data numbers.
/// To be used to transfer memory between host and client. It has bindings for
/// OpenGL/CL interoperability. Intended for graphics rendering.
class float4G
{
private:

public:
  float4G_structure* data;                                                                          ///< Data structure.
  cl_mem             buffer;                                                                        ///< Data memory buffer.
  GLuint             vao;                                                                           ///< Data VAO.
  GLuint             vbo;                                                                           ///< Data VBO.
  GLsizeiptr         size;                                                                          ///< Data size.
  GLuint             layout;                                                                        ///< Data layout index.
  std::string        name;                                                                          ///< Data name.
  bool               ready;                                                                         ///< "ready" flag.

  float4G ();
  void init (
             GLsizeiptr loc_size                                                                    /// Data size.
            );

  ~float4G();
};

#endif
