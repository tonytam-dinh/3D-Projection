// Dinh, Tonytam T.
// ttd3179
// 2019-11-22

//----------------------------------------------------------
#include <math.h>
#include <stdio.h>

#include "cull.h"
#include "vertex.h"

//----------------------------------------------------------
int cull( Vertex *v1, Vertex *v2, Vertex *v3, Vertex *cameraPosition )
{
  // TODO: Compute the toTriangle vector.  Compute the triangle
  //       normal vector.  Compute the dot product of these two
  //       vectors.  Return an indication of whether this triangle
  //       should be culled.
  // Vector From Pt 2 to 1
  double Vx = v2->x - v1->x;
  double Vy = v2->y - v1->y;
  double Vz = v2->z - v1->z;
  // Vector From Pt 3 to 1
  double Wx = v3->x - v1->x;
  double Wy = v3->y - v1->y;
  double Wz = v3->z - v1->z;
  //triangle normal vector
  double Nx = (Vy * Wz) - (Vz * Wy);
  double Ny = (Vz * Wx) - (Vx * Wz);
  double Nz = (Vx * Wy) - (Vy * Wx);
  if(cameraPosition->z == 0) cameraPosition->z = 10000000;
  //toTriangle vector
  double Tx = v1->x - cameraPosition->x;
  double Ty = v1->y - cameraPosition->y;
  double Tz = v1->z - cameraPosition->z;
  //Dot product
  double dotProduct = 0.0;
  dotProduct += Nx * Tx;
  dotProduct += Ny * Ty;
  dotProduct += Nz * Tz;
  // Cull is active if dot product is greater or equal to 0
  if(dotProduct < 0 ) return 1;
  
  return 0;
}

//----------------------------------------------------------
