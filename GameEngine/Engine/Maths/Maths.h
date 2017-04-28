#include "Vector3.h"

#include <vector>

using namespace std;

#define PI 3.14159

namespace Maths
{
	double CovertToRadians(double degress);
	double CovertToDegrees(double radians);
	Vector3 RoatePoint(Vector3 point, Vector3 pivot, float rotation);
	float Min(vector<float> x);
	float Max(vector<float> x);
}