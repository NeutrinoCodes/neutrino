/// @file

__kernel void thekernel (
                          __global float4*    Positions,
                          __global float4*    Colors
                        )
{
    //////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////// INDEXES ///////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////
    unsigned int gid = get_global_id(0);                                        // Setting global index "gid"...


    //////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////// NODES ////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////
    float4      P   = Positions[gid];                                           // Nodes positions.
    float4      C   = Colors[gid];                                              // Nodes colors.

    barrier(CLK_GLOBAL_MEM_FENCE);
    P.z = 0.1f*sin(10.0f*P.x) + 0.1*cos(10.0f*P.y);
    //C = (float4)(1.0f, 0.0f, 0.0f, 1.0f);
    barrier(CLK_GLOBAL_MEM_FENCE);

    Positions[gid] = P;
    Colors[gid] = C;

    barrier(CLK_GLOBAL_MEM_FENCE);
}
