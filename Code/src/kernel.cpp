#include "kernel.hpp"

//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// "KERNEL" CLASS ////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
kernel::kernel()
{
  source              = NULL;                                                   // Initializing kernel source...
  program             = NULL;                                                   // Initializing kernel program...
  size                = 0;                                                      // Initializing kernel size...
  dimension           = 0;                                                      // Initializing kernel dimension..
  event               = NULL;                                                   // Initializing kernel event...
  kernel_id           = NULL;                                                   // Initializing kernel id...
}

// OpenCL error get function:
const char* kernel::get_error     (
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

    default: return "Unknown OpenCL error";
  }
}

// OpenCL error check function:
void kernel::check_error        (
                                  cl_int loc_error                              // Error code.
                                )
{
  if(loc_error != CL_SUCCESS)                                                   // Checking local error code...
  {
    printf("\nError:  %s\n", get_error(loc_error));                             // Printing error message...
    exit(EXIT_FAILURE);                                                         // Exiting...
  }
}

void kernel::init (
                    neutrino* loc_baseline,                                     // Neutrino baseline.
                    char*     loc_kernel_filename,                              // OpenCL kernel file name.
                    size_t*   loc_kernel_size,                                  // OpenCL kernel size.
                    cl_uint   loc_kernel_dimension                              // OpenCL kernel dimension.
                  )
{
  cl_int        loc_error;                                                      // Error code.
  size_t        loc_kernel_source_size;                                         // Kernel source size [characters].
  int           i;                                                              // Index.

  file_name = loc_kernel_filename;                                              // Getting OpenCL kernel file name...
  size      = loc_kernel_size;                                                  // Getting OpenCL kernel size...
  dimension = loc_kernel_dimension;                                             // Getting OpenCL kernel dimension...

  baseline->action("loading OpenCL kernel source from file...");                // Printing message...

  baseline->load_file(file_name, &source, &source_size);                        // Loading file...

  baseline->done();                                                             // Printing message...

  baseline->action("creating OpenCL program from kernel source...");            // Printing message...

  // Creating OpenCL program from its source:
  program = clCreateProgramWithSource (
                                        loc_baseline->context_id,               // OpenCL context ID.
                                        1,                                      // # of program sources.
                                        (const char**)&source,                  // Program source.
                                        &source_size,                           // Source size.
                                        &loc_error                              // Error code.
                                      );

  check_error(loc_error);                                                       // Checking error.

  loc_baseline->free_file(source);                                              // Freeing OpenCL kernel buffer...

  baseline->done();                                                             // Printing message...

  baseline->action("building OpenCL program...");                               // Printing message...

  // Creating device ID list:
  device_id = new cl_device_id[1];                                              // OpenCL device ID.
  device_id[0] = loc_baseline->device_id;                                       // Getting device ID.

  // Building OpenCL program:
  loc_error = clBuildProgram  (
                                program,                                        // Program.
                                1,                                              // # of devices.
                                device_id,                                      // Device ID.
                                "",                                             // Options.
                                NULL,                                           // Notification routine.
                                NULL                                            // Notification argument.
                              );

  if (loc_error != CL_SUCCESS)                                                  // Checking compiled kernel...
  {
    loc_baseline->error(get_error(loc_error));                                  // Printing message...

    // Getting OpenCL compiler information:
    loc_error = clGetProgramBuildInfo (
                                        program,
                                        device_id[0],
                                        CL_PROGRAM_BUILD_LOG,
                                        0,
                                        NULL,
                                        &log_size
                                      );

    check_error(loc_error);

    log_value = (char*) calloc(log_size + 1, sizeof(char));                     // Allocating log buffer...

    if (!log_value)
    {
      loc_baseline->error("unable to allocate buffer memory log!");             // Printing message...
      exit(EXIT_FAILURE);                                                       // Exiting...
    }

    // Reading OpenCL compiler error log:
    loc_error = clGetProgramBuildInfo (
                                        program,
                                        device_id[0],
                                        CL_PROGRAM_BUILD_LOG,
                                        log_size + 1,
                                        log_value,
                                        NULL
                                      );

    check_error(loc_error);                                                     // Checking error...

    printf("%s\n", log_value);                                                  // Displaying log...
    free(log_value);                                                            // Freeing log...
    exit(loc_error);                                                            // Exiting...
  }

  baseline->done();                                                             // Printing message...

  baseline->action("creating OpenCL kernel object from program...");            // Printing message...

  // Creating OpenCL kernel:
  kernel_id = clCreateKernel          (
                                        program,                                // OpenCL kernel program.
                                        KERNEL_NAME,                            // Kernel name.
                                        &loc_error                              // Error code.
                                      );

  check_error(loc_error);                                                       // Checking error...

  baseline->done();                                                             // Printing message...
}

void kernel::execute(queue* loc_queue_id, kernel_mode loc_kernel_mode)
{
  cl_int        loc_error;                                                      // Error code.

  // Enqueueing OpenCL kernel (as a single task):
  loc_error = clEnqueueNDRangeKernel  (
                                        loc_queue_id->queue_id,                 // Queue ID.
                                        kernel_id,                              // Kernel ID.
                                        dimension,                              // Kernel dimension.
                                        NULL,                                   // Global work offset.
                                        size,                                   // Global work size.
                                        NULL,                                   // Local work size.
                                        0,                                      // # of events.
                                        NULL,                                   // Event list.
                                        &event                                  // Event.
                                      );

  check_error(loc_error);                                                       // Checking error...

  // Selecting kernel mode:
  switch(loc_kernel_mode)
  {
    case WAIT:
      loc_error = clWaitForEvents(1, &event);                                   // Waiting for kernel execution to be completed (host blocking)...
      check_error(loc_error);                                                   // Checking error...
    break;

    case DONT_WAIT:
                                                                                // Doing nothing, without waiting!
    break;

    default:
      loc_error = clWaitForEvents(1, &event);                                   // Waiting for kernel execution to be completed (host blocking)...
      check_error(loc_error);                                                   // Checking error...
    break;
  }
}

kernel::~kernel()
{
  cl_int        loc_error;                                                      // Error code.

  baseline->action("releasing OpenCL kernel...");                               // Printing message...

  loc_error = clReleaseKernel(kernel_id);                                       // Releasing OpenCL kernel...
  check_error(loc_error);

  baseline->done();

  baseline->action("releasing OpenCL kernel event...");                         // Printing message...

  loc_error = clReleaseEvent(event);                                            // Releasing OpenCL event...
  check_error(loc_error);

  baseline->done();

  baseline->action("releasing OpenCL program...");                              // Printing message...

  loc_error = clReleaseProgram(program);                                        // Releasing OpenCL program...
  check_error(loc_error);

  delete[] device_id;                                                           // Deleting device ID array...

  baseline->done();
}