
#ifndef __Geometry_hxx__
#define __Geometry_hxx__

#include <Point2D.hxx>
#include <Point3D.hxx>

// general purpose geometry functions

namespace Engine
{

// this method checks whether P1 and P2 are in the same side of the line defined by A and B
bool sameSide( Engine::Point2D<int> P1, Engine::Point2D<int> P2, Engine::Point2D<int> A, Engine::Point2D<int> B )
{
	Engine::Point3D<int> BA(B._x-A._x, B._y-A._y, 0);
	Engine::Point3D<int> P1A(P1._x-A._x, P1._y-A._y, 0);
	Engine::Point3D<int> P2A(P2._x-A._x, P2._y-A._y, 0);

	Engine::Point3D<int> cp1 = BA.crossProduct(P1A);
	Engine::Point3D<int> cp2 = BA.crossProduct(P2A);
	if(cp1.dot(cp2)>=0)
	{
		return true;		
	}
	return false;
}

// this method checks whether p is inside a triangle defined by the points (0,0), b and c
bool insideTriangle( Engine::Point2D<int> p,  Engine::Point2D<int> b, Engine::Point2D<int> c )
{
	Engine::Point2D<int> a(0,0);
	if ( sameSide( p, a, b, c ) && sameSide( p, b, a, c ) && sameSide( p, c, a, b  ) )
	{
		return true;
	}
	return false;
}

// this method checks whether P1 and P2 are in the same side of the line defined by A and B
bool sameSide( Engine::Point2D<float> P1, Engine::Point2D<float> P2, Engine::Point2D<float> A, Engine::Point2D<float> B )
{
	Engine::Point3D<float> BA(B._x-A._x, B._y-A._y, 0);
	Engine::Point3D<float> P1A(P1._x-A._x, P1._y-A._y, 0);
	Engine::Point3D<float> P2A(P2._x-A._x, P2._y-A._y, 0);
	
	Engine::Point3D<float> cp1 = BA.crossProduct(P1A);
	Engine::Point3D<float> cp2 = BA.crossProduct(P2A);
	if(cp1.dot(cp2)>=0)
	{
		return true;		
	}
	return false;
}

// this method checks whether p is inside a triangle defined by the points (0,0), b and c
bool insideTriangle( Engine::Point2D<float> p,  Engine::Point2D<float> b, Engine::Point2D<float> c )
{
	Engine::Point2D<float> a(0,0);
	if ( sameSide( p, a, b, c ) && sameSide( p, b, a, c ) && sameSide( p, c, a, b  ) )
	{
		return true;
	}
	return false;
}




} // namespace Engine

#endif // __Geometry_hxx__

