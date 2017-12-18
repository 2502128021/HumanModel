//using namespace std;
#include <vector>
class Point3d
{
public:
	double x;
	double y;
	double z;
	Point3d()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	~Point3d()
	{

	}
	Point3d(double a, double b, double c)
	{
		x = a;
		y = b;
		z = c;
	}
};
class Triangle
{
public:
	int P0_index;
	int P1_index;
	int P2_index;
	Triangle(int p0_index, int p1_index, int p2_index)
	{
		P0_index = p0_index;
		P1_index = p1_index;
		P2_index = p2_index;
	}
	Triangle()
	{
		P0_index = -1;
		P1_index = -1;
		P2_index = -1;
	}
	~Triangle();
};
class Mesh
{
public:
	std::vector<Point3d> Vertices;
	std::vector<Triangle> Faces;
	int AddVertex(Point3d& toAdd)
	{
		int index = Vertices.size();
		Vertices.push_back(toAdd);
		return index;
	}
	int AddFace(Triangle& tri)
	{
		int index = Faces.size();
		Faces.push_back(tri);
		return index;
	}
};