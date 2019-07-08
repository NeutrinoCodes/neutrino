#include "host_datatypes.hpp"

//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// "FLOAT1" CLASS ////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
float1::float1()
{
// Doing nothing.
}

void float1::init (
                   size_t loc_size                                              // Data size.
                  )
{
  data = new cl_float[loc_size];
  size = loc_size;
}

float1::~float1()
{
  delete[] data;
}

//////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// "INT1" CLASS /////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
int1::int1()
{
// Doing nothing.
}

void int1::init (
                 size_t loc_size                                                // Data size.
                )
{
  data = new cl_long[loc_size];
  size = loc_size;
}

int1::~int1()
{
  delete[] data;
}

//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// "FLOAT4" CLASS ////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
float4::float4()
{
// Doing nothing.
}

void float4::init (
                   size_t loc_size                                              // Data size.
                  )
{
  data = new float4_structure[loc_size];
  size = loc_size;
}

float4::~float4()
{
  delete[] data;
}

//////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// "INT4" CLASS /////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
int4::int4()
{
// Doing nothing.
}

void int4::init (
                 size_t loc_size                                                // Data size.
                )
{
  data = new int4_structure[loc_size];
  size = loc_size;
}

int4::~int4()
{
  delete[] data;
}

//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// "POINT" CLASS /////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
point::point()
{
// Doing nothing.
}

void point::init (
                  GLsizeiptr loc_size                                           // Data size.
                 )
{
  data = new point_structure[loc_size];
  size = loc_size;
}

point::~point()
{
  delete[] data;
}

//////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// "COLOR" CLASS /////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
color::color()
{
// Doing nothing.
}

void color::init (
                  GLsizeiptr loc_size                                           // Data size.
                 )
{
  data = new color_structure[loc_size];
  size = loc_size;
}

color::~color()
{
  delete[] data;
}

//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// "INFO" CLASS ////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
info::info(
           size_t loc_size
          )
{
  value = new char[loc_size];
  size  = loc_size;
}

info::~info()
{
  delete[] value;
}
