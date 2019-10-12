/// @file   queue.hpp
/// @author Erik ZORZIN
/// @date   24OCT2019
/// @brief  Declaration of an OpenCL "queue" class.

#ifndef queue_hpp
#define queue_hpp

#include "neutrino.hpp"
#include "data_classes.hpp"

/// @class queue
/// ### OpenCL queue class.
/// Declares an OpenCL queue. The queue is a system to accumulate OpenCL commands in a list that
/// OpenCL eventually executes in front of a @link opencl::execute @endlink instruction.
/// Commands in the queue are related to what is written in the OpenCL kernel source file(s).
class queue
{
private:
  neutrino*        baseline;                                                                        ///< @brief **Neutrino baseline.**

public:
  cl_command_queue queue_id;                                                                        ///< @brief **OpenCL queue.**
  cl_context       context_id;                                                                      ///< @brief **OpenCL context.**
  cl_device_id     device_id;                                                                       ///< @brief **OpenCL device id.**

  /// @brief **Class constructor.**
  /// @details Sets queue_id, context_id and device_id to NULL default values.
  queue ();

  /// @brief **Class initializer.**
  /// @details It creates the OpenCL queue.
  void init (
             neutrino* loc_baseline                                                                 ///< Neutrino object.
            );

  /////////////////////////////////////////////////////////////////////////////////////////////////////
  //////////////////////////////////////// "read" functions ///////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////////
  /// @brief read
  /// @details Reads data from the OpenCL queue.
  void read
  (
   int1*   loc_data,                                                                                ///< int1 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload read(int2* loc_data, cl_uint loc_layout_index)
  /// @details Reads data from the OpenCL queue.
  void read
  (
   int2*   loc_data,                                                                                ///< int2 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload read(int3* loc_data, cl_uint loc_layout_index)
  /// @details Reads data from the OpenCL queue.
  void read
  (
   int3*   loc_data,                                                                                ///< int3 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload read(int4* loc_data, cl_uint loc_layout_index)
  /// @details Reads data from the OpenCL queue.
  void read
  (
   int4*   loc_data,                                                                                ///< int4 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload read(float1* loc_data, cl_uint loc_layout_index)
  /// @details Reads data from the OpenCL queue.
  void read
  (
   float1* loc_data,                                                                                ///< float1 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload read(float1G* loc_data, GLuint loc_layout_index)
  /// @details Reads data from the OpenCL queue.
  void read
  (
   float1G* loc_data,                                                                               ///< float1G object.
   GLuint   loc_layout_index                                                                        ///< Layout index.
  );

  /// @overload read(float2* loc_data, cl_uint loc_layout_index)
  /// @details Reads data from the OpenCL queue.
  void read
  (
   float2* loc_data,                                                                                ///< float2 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload read(float3* loc_data, cl_uint loc_layout_index)
  /// @details Reads data from the OpenCL queue.
  void read
  (
   float3* loc_data,                                                                                ///< float3 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload read(float4* loc_data, cl_uint loc_layout_index)
  /// @details Reads data from the OpenCL queue.
  void read
  (
   float4* loc_data,                                                                                ///< float4 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload read(float4G* loc_data, GLuint loc_layout_index)
  /// @details Reads data from the OpenCL queue.
  void read
  (
   float4G* loc_data,                                                                               ///< float4G object.
   GLuint   loc_layout_index                                                                        ///< Layout index.
  );

  /////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////// write "functions" ////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////////
  /// @brief write
  /// @details Writes data to the OpenCL queue.
  void write
  (
   int1*   loc_data,                                                                                ///< int1 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload write(int2* loc_data, cl_uint loc_layout_index)
  /// @details Writes data from the OpenCL queue.
  void write
  (
   int2*   loc_data,                                                                                ///< int2 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload write(int3* loc_data, cl_uint loc_layout_index)
  /// @details Writes data from the OpenCL queue.
  void write
  (
   int3*   loc_data,                                                                                ///< int3 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload write(int4* loc_data, cl_uint loc_layout_index)
  /// @details Writes data from the OpenCL queue.
  void write
  (
   int4*   loc_data,                                                                                ///< int4 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload write(float1* loc_data, cl_uint loc_layout_index)
  /// @details Writes data from the OpenCL queue.
  void write
  (
   float1* loc_data,                                                                                ///< float1 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload write(float1G* loc_data, GLuint loc_layout_index)
  /// @details Writes data from the OpenCL queue.
  void write
  (
   float1G* loc_data,                                                                               ///< float1G object.
   GLuint   loc_layout_index                                                                        ///< Layout index.
  );

  /// @overload write(float2* loc_data, cl_uint loc_layout_index)
  /// @details Writes data from the OpenCL queue.
  void write
  (
   float2* loc_data,                                                                                ///< float2 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload write(float3* loc_data, cl_uint loc_layout_index)
  /// @details Writes data from the OpenCL queue.
  void write
  (
   float3* loc_data,                                                                                ///< float3 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload write(float4* loc_data, cl_uint loc_layout_index)
  /// @details Writes data from the OpenCL queue.
  void write
  (
   float4* loc_data,                                                                                ///< float4 object.
   cl_uint loc_layout_index                                                                         ///< Layout index.
  );

  /// @overload write(float4G* loc_data, GLuint loc_layout_index)
  /// @details Writes data from the OpenCL queue.
  void write
  (
   float4G* loc_data,                                                                               ///< float4G object.
   GLuint   loc_layout_index                                                                        ///< Layout index.
  );

  /////////////////////////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////// acquire "functions" ///////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////////
  void acquire
  (
   float1G* loc_data,                                                                               ///< Data object.
   GLuint   loc_layout_index                                                                        ///< OpenGL shader layout index.
  );

  ////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////// ACQUIRE "float4G" overload ///////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  void acquire
  (
   float4G* loc_data,                                                                               ///< Data object.
   GLuint   loc_layout_index                                                                        ///< OpenGL shader layout index.
  );

  ////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////// RELEASE "float1G" overload //////////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  void release
  (
   float1G* loc_data,                                                                               ///< Data object.
   GLuint   loc_layout_index                                                                        ///< OpenGL shader layout index.
  );

  ////////////////////////////////////////////////////////////////////////////////
  ///////////////////////////// RELEASE "float4G" overload //////////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  void release
  (
   float4G* loc_data,                                                                               ///< Data object.
   GLuint   loc_layout_index                                                                        ///< OpenGL shader layout index.
  );

  ////////////////////////////////////////////////////////////////////////////////
  //////////////////////////////////// DESTRUCTOR ////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  ~queue();
};

#endif
