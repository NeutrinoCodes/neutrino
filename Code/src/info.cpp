#include "info.hpp"

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// "INFO" CLASS ////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
info::info(
           size_t loc_size
          )
{
  size  = loc_size;
  value = new char[loc_size];
}

info::~info()
{
  delete[] value;
}
