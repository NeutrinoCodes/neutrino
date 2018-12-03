#include "int1.hpp"

//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// "INT1" CLASS //////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
int1::int1()
{

}

// OpenCL error get function:
const char* int1::get_error       (
                                    cl_int loc_error                            // Local error code.
                                  )
{
  switch(loc_error)
  {
    // Run-time and JIT compiler errors:
    case      0: return "CL_SUCCESS";
    case     -1: return "CL_DEVICE_NOT_FOUND";
    case     -2: return "CL_DEVICE_NOT_AVAILABLE";
    case     -3: return "CL_COMPILER_NOT_AVAILABLE";
    case     -4: return "CL_MEM_OBJECT_ALLOCATION_FAILURE";
    case     -5: return "CL_OUT_OF_RESOURCES";
    case     -6: return "CL_OUT_OF_HOST_MEMORY";
    case     -7: return "CL_PROFILING_INFO_NOT_AVAILABLE";
    case     -8: return "CL_MEM_COPY_OVERLAP";
    case     -9: return "CL_IMAGE_FORMAT_MISMATCH";
    case    -10: return "CL_IMAGE_FORMAT_NOT_SUPPORTED";
    case    -11: return "CL_BUILD_PROGRAM_FAILURE";
    case    -12: return "CL_MAP_FAILURE";
    case    -13: return "CL_MISALIGNED_SUB_BUFFER_OFFSET";
    case    -14: return "CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST";
    case    -15: return "CL_COMPILE_PROGRAM_FAILURE";
    case    -16: return "CL_LINKER_NOT_AVAILABLE";
    case    -17: return "CL_LINK_PROGRAM_FAILURE";
    case    -18: return "CL_DEVICE_PARTITION_FAILED";
    case    -19: return "CL_KERNEL_ARG_INFO_NOT_AVAILABLE";

    // Compile-time errors:
    case    -30: return "CL_INVALID_VALUE";
    case    -31: return "CL_INVALID_DEVICE_TYPE";
    case    -32: return "CL_INVALID_PLATFORM";
    case    -33: return "CL_INVALID_DEVICE";
    case    -34: return "CL_INVALID_CONTEXT";
    case    -35: return "CL_INVALID_QUEUE_PROPERTIES";
    case    -36: return "CL_INVALID_COMMAND_QUEUE";
    case    -37: return "CL_INVALID_HOST_PTR";
    case    -38: return "CL_INVALID_MEM_OBJECT";
    case    -39: return "CL_INVALID_IMAGE_FORMAT_DESCRIPTOR";
    case    -40: return "CL_INVALID_IMAGE_SIZE";
    case    -41: return "CL_INVALID_SAMPLER";
    case    -42: return "CL_INVALID_BINARY";
    case    -43: return "CL_INVALID_BUILD_OPTIONS";
    case    -44: return "CL_INVALID_PROGRAM";
    case    -45: return "CL_INVALID_PROGRAM_EXECUTABLE";
    case    -46: return "CL_INVALID_KERNEL_NAME";
    case    -47: return "CL_INVALID_KERNEL_DEFINITION";
    case    -48: return "CL_INVALID_KERNEL";
    case    -49: return "CL_INVALID_ARG_INDEX";
    case    -50: return "CL_INVALID_ARG_VALUE";
    case    -51: return "CL_INVALID_ARG_SIZE";
    case    -52: return "CL_INVALID_KERNEL_ARGS";
    case    -53: return "CL_INVALID_WORK_DIMENSION";
    case    -54: return "CL_INVALID_WORK_GROUP_SIZE";
    case    -55: return "CL_INVALID_WORK_ITEM_SIZE";
    case    -56: return "CL_INVALID_GLOBAL_OFFSET";
    case    -57: return "CL_INVALID_EVENT_WAIT_LIST";
    case    -58: return "CL_INVALID_EVENT";
    case    -59: return "CL_INVALID_OPERATION";
    case    -60: return "CL_INVALID_GL_OBJECT";
    case    -61: return "CL_INVALID_BUFFER_SIZE";
    case    -62: return "CL_INVALID_MIP_LEVEL";
    case    -63: return "CL_INVALID_GLOBAL_WORK_SIZE";
    case    -64: return "CL_INVALID_PROPERTY";
    case    -65: return "CL_INVALID_IMAGE_DESCRIPTOR";
    case    -66: return "CL_INVALID_COMPILER_OPTIONS";
    case    -67: return "CL_INVALID_LINKER_OPTIONS";
    case    -68: return "CL_INVALID_DEVICE_PARTITION_COUNT";

    // Extension errors:
    case  -1000: return "CL_INVALID_GL_SHAREGROUP_REFERENCE_KHR";
    case  -1001: return "CL_PLATFORM_NOT_FOUND_KHR";
    case  -1002: return "CL_INVALID_D3D10_DEVICE_KHR";
    case  -1003: return "CL_INVALID_D3D10_RESOURCE_KHR";
    case  -1004: return "CL_D3D10_RESOURCE_ALREADY_ACQUIRED_KHR";
    case  -1005: return "CL_D3D10_RESOURCE_NOT_ACQUIRED_KHR";

    default:     return "Unknown OpenCL error";
  }
}

// OpenCL error check function:
void int1::check_error          (
                                  cl_int loc_error                              // Error code.
                                )
{
  if(loc_error != CL_SUCCESS)                                                   // Checking local error code...
  {
    printf("\nError:  %s\n", get_error(loc_error));                             // Printing error message...
    exit(EXIT_FAILURE);                                                         // Exiting...
  }
}

// Initialization:
void int1::init                 (
                                  neutrino* loc_baseline,                       // Neutrino baseline.
                                  kernel*   loc_kernel,                         // OpenCL kernel.
                                  cl_uint   loc_kernel_arg,                     // OpenCL kernel argument #.
                                  size_t    loc_data_size                       // Data number.
                                )
{
  cl_int    loc_error;                                                          // Error code.
  size_t    i;                                                                  // Index.

  baseline->action("initializing \"int1\" object...");                          // Printing message...

  size = loc_data_size;                                                         // Data array size.
  buffer = NULL;                                                                // OpenCL data buffer.
  opencl_context = loc_baseline->context_id;                                    // Getting OpenCL context...

  data = new cl_long[1*size];                                                   // Creating array for unfolded data...

  for (i = 0; i < size; i++)                                                    // Filling unfolded data array...
  {
    data[1*i + 0] = 0.0f;                                                       // Filling "x"...
  }

  // Creating OpenCL memory buffer:
  buffer = clCreateBuffer         (
                                    opencl_context,                             // OpenCL context.
                                    CL_MEM_READ_WRITE | CL_MEM_COPY_HOST_PTR,   // Memory flags.
                                    1*sizeof(cl_float)*size,                    // Data buffer size.
                                    data,                                       // Data buffer.
                                    &loc_error                                  // Error code.
                                  );

  check_error(loc_error);                                                       // Checking returned error code...

  // Setting OpenCL buffer as kernel argument:
  loc_error = clSetKernelArg      (
                                    loc_kernel->kernel_id,                      // Kernel.
                                    loc_kernel_arg,                             // Kernel argument index.
                                    sizeof(cl_mem),                             // Kernel argument size.
                                    &buffer                                     // Kernel argument value.
                                  );

  check_error(loc_error);                                                       // Checking returned error code...

  baseline->done();                                                             // Printing message...
}

// "x" set function:
void      int1::set_x             (
                                    size_t  loc_index,                          // Data index.
                                    cl_long loc_value                           // Data value.
                                  )
{
  data[1*loc_index + 0] = loc_value;                                            // Setting data value...
}

// "x" get function:
cl_long   int1::get_x             (
                                    size_t loc_index                            // Data index.
                                  )
{
  cl_long loc_value;                                                            // Value.

  loc_value = data[1*loc_index + 0];                                            // Getting data value...

  return(loc_value);                                                            // Returning data value...
}

// OpenCL write buffer function:
void      int1::write             (
                                    queue*  loc_queue,                          // Queue.
                                    kernel* loc_kernel,                         // Kernel.
                                    cl_uint loc_kernel_arg                      // Kernel argument index.
                                  )
{
  cl_int  loc_error;                                                            // Local error code.

  loc_error = clEnqueueWriteBuffer      (
                                          loc_queue->queue_id,                  // OpenCL queue ID.
                                          buffer,                               // Data buffer.
                                          CL_TRUE,                              // Blocking write flag.
                                          0,                                    // Data buffer offset.
                                          1*sizeof(cl_float)*size,              // Data buffer size.
                                          data,                                 // Data buffer.
                                          0,                                    // Number of events in the list.
                                          NULL,                                 // Event list.
                                          NULL                                  // Event.
                                        );

  check_error(loc_error);
}

// OpenCL write buffer function:
void      int1::read              (
                                    queue*  loc_queue,                          // Queue.
                                    kernel* loc_kernel,                         // Kernel.
                                    cl_uint loc_kernel_arg                      // Kernel argument index.
                                  )
{
  cl_int  loc_error;                                                            // Local error code.

  loc_error = clEnqueueReadBuffer      (
                                          loc_queue->queue_id,                  // OpenCL queue ID.
                                          buffer,                               // Data buffer.
                                          CL_TRUE,                              // Blocking write flag.
                                          0,                                    // Data buffer offset.
                                          1*sizeof(cl_float)*size,              // Data buffer size.
                                          data,                                 // Data buffer.
                                          0,                                    // Number of events in the list.
                                          NULL,                                 // Event list.
                                          NULL                                  // Event.
                                        );

  check_error(loc_error);
}

int1::~int1()
{
  cl_int  loc_error;                                                            // Local error code.

  baseline->action("releasing \"float4\" object...");                           // Printing message...

  if(buffer != NULL)                                                            // Checking buffer..
  {
    loc_error = clReleaseMemObject(buffer);                                     // Releasing OpenCL buffer object...

    check_error(loc_error);                                                     // Checking returned error code...
  }

  delete[] data;                                                                // Releasing data buffer...

  baseline->done();                                                             // Printing message...
}