/// @file

#include "neutrino.hpp"

//////////////////////////////////////////////////////////////////////////////////
///////////////////////////////// "NEUTRINO" CLASS ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
neutrino::neutrino()
{
  opengl* theopengl = new opengl();                                             // The OpenGL object.
  opencl* theopencl = new opencl();                                             // The OpenCL object.

  ascii_spin_phase = 0;                                                         // Initializing ascii_spin_phase...
  ascii_spin_n_old = 0;                                                         // Initializing ascii_spin_n_old...
  get_neutrino_path();                                                          // Getting NEUTRINO_PATH environmental variable...
}

void neutrino::get_neutrino_path()
{
  neutrino_path = getenv("NEUTRINO_PATH");

  if (neutrino_path != NULL)
  {
    printf("Action: loading NEUTRINO_PATH environmental variable...\n");
  }
  else
  {
    printf("Error:  NEUTRINO_PATH environmental variable not defined!\n");
    exit(1);
  }
}

double neutrino::get_cpu_time()
{
  double time;

  #if defined(__WINDOWS__)
    FILETIME createTime;
    FILETIME exitTime;
    FILETIME kernelTime;
    FILETIME userTime;

    if (
          GetProcessTimes(GetCurrentProcess(),
                          &createTime,
                          &exitTime,
                          &kernelTime,
                          &userTime)
          != -1
        )
    {
      SYSTEMTIME userSystemTime;
      if (FileTimeToSystemTime(&userTime, &userSystemTime) != -1)
      {
        time =  (double)userSystemTime.wHour*3600.0 +
                (double)userSystemTime.wMinute*60.0 +
                (double)userSystemTime.wSecond +
                (double)userSystemTime.wMilliseconds/1000.0;
        return time;
      }
    }

  #elif defined(__linux__) || defined(__APPLE__)

    #if _POSIX_TIMERS > 0
    {
      clockid_t id;
      struct timespec ts;

      #if _POSIX_CPUTIME > 0

      if (clock_getcpuclockid(0, &id) == -1)
      #endif

      #if defined(CLOCK_PROCESS_CPUTIME_ID)
      id = CLOCK_PROCESS_CPUTIME_ID;

      #elif defined(CLOCK_VIRTUAL)
      id = CLOCK_VIRTUAL;

      #else
      id = (clockid_t) - 1;

      #endif

      if (id != (clockid_t) - 1 && clock_gettime(id, &ts) != -1)
      {
        time = (double)ts.tv_sec + (double)ts.tv_nsec/1000000000.0;
        return time;
      }
    }
    #endif

    #if defined(RUSAGE_SELF)
        {
          struct rusage rusage;
          if (getrusage(RUSAGE_SELF, &rusage) != -1)
          {
            time = (double)rusage.ru_utime.tv_sec + (double)rusage.ru_utime.tv_usec/1000000.0;
            return time;
          }
        }
    #endif

    #if defined(_SC_CLK_TCK)
      {
        const double ticks = (double)sysconf( _SC_CLK_TCK );
        struct tms tms;
        if (times(&tms) != (clock_t) - 1)
        {
          time = (double)tms.tms_utime/ticks;
          return time;
        }
      }
    #endif

    #if defined(CLOCKS_PER_SEC)
      {
        clock_t cl = clock();
        if (cl != (clock_t) - 1)
        {
          time = (double)cl / (double)CLOCKS_PER_SEC;
          return time;
        }
      }
    #endif

  #endif

  return -1.0;
}

void neutrino::tic()
{
  tic = get_cpu_time();
}

void neutrino::get_toc()
{
  toc = get_cpu_time();
  loop_time = toc - tic;
  ascii_spin();
}

void neutrino::ascii_spin()
{
  int loop_time;
  int num;
  int n;
  int i;

  loop_time = int(round(1000000*(toc - tic)));                                  // Loop execution time [us].

  num = loop_time;
  n = 0;

  while (num > 0)
  {
    num /= 10;
    n++;
  }

  switch (ascii_spin_phase)
  {
    case 0:
      printf("Action: running OpenCL program... %d us", text, loop_time);
      fflush(stdout);
      ascii_spin_n_old = n;
      break;
    case 1:
      printf("\b");
      printf(" ");
      printf("\b");
      printf("\b");
      printf(" ");
      printf("\b");
      printf("\b");
      printf(" ");
      printf("\b");

      for (i = 0; i < ascii_spin_n_old; i++)
      {
        printf("\b");
        printf(" ");
        printf("\b");
      }

      printf("%d us", loop_time);
      fflush(stdout);
      ascii_spin_n_old = n;
      break;
  }

  ascii_spin_phase++;

  if (ascii_spin_phase == 2)
  {
    ascii_spin_phase = 1;
  }
}

void neutrino::ascii_spin_stop()
{
  int i;

  printf("\b");
  printf(" ");
  printf("\b");
  printf("\b");
  printf(" ");
  printf("\b");
  printf("\b");
  printf(" ");
  printf("\b");

  for (i = 0; i < ascii_spin_n_old; i++)
  {
    printf("\b");
    printf(" ");
    printf("\b");
  }

  printf("DONE!\n");
}

neutrino::~neutrino()
{
  ascii_spin_stop();

  delete opengl;
  delete opencl;
}
