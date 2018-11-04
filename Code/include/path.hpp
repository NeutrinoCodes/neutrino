/// @file

#ifndef path_hpp
#define path_hpp

  //////////////////////////////////////////////////////////////////////////
  //////////////////////// Standard C header files /////////////////////////
  //////////////////////////////////////////////////////////////////////////
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <math.h>
  #include <errno.h>

  ////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////// "PATH" CLASS ////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  class path
  {
    private:

    public:
      char*   value;                                                            // Value array.
      size_t  size;                                                             // Value array size.

      path();
      ~path();
  };

#endif
