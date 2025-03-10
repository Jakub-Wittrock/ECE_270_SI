#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>




//----------------------------------------------------------------------------------
// Range Struct and Function Prototypes
//----------------------------------------------------------------------------------
struct Range
{
	float min;
	float max;
};
typedef struct Range Range;

void range_set(Range* ptr, float min_in, float max_in);
void range_print(Range range, char label[]);
Range* new_Range(float min_in, float max_in);
int range_is_inside(Range range, float x);
float range_map(float in, Range inRange, Range outRange); // return out
void range_map_vec(int n, float in[], float out[],Range inRange, Range outRange);
int range_is_overlap(Range r, Range s); // Return 1 if the two rangesoverlap


//----------------------------------------------------------------------------------
// Point Struct and Function Prototypes
//----------------------------------------------------------------------------------

struct Point
{
	float x;
	float y;
};
typedef struct Point Point;

void point_set(Point* ptr, float x_in, float y_in);
void point_print(Point point, char label[]);
float point_magnitude(Point p); 
Point point_unit_vector(Point p); 
float point_slope(Point p, Point q);
float point_distance(Point p, Point q);
Point point_midpoint(Point p, Point q);


//----------------------------------------------------------------------------------
// Main
//----------------------------------------------------------------------------------

int main()
{
	Range* c = new_Range(0, 100);
	Range* f = new_Range(32, 212);

	range_print(*c, "Celsius");
	range_print(*f, "Farenheit");

	printf("\n F: %f",range_map(20, *c, *f));


}



//----------------------------------------------------------------------------------
// Range Structure Function Definitions
//----------------------------------------------------------------------------------

void range_set(Range* ptr, float min_in, float max_in)
{
	ptr->min = min_in;
	ptr->max = max_in;
}
void range_print(Range range, char label[])
{
	printf("\nRange labeled: %s", label);
	printf("\nRange min: %f", range.min);
	printf("\nRange max: %f", range.max);
}
Range* new_Range(float min_in, float max_in)
{
	Range *r = malloc(sizeof(Range));
	r->min = min_in;
	r->max = max_in;
}
int range_is_inside(Range range, float x)
{
	if (x < range.max && x > range.min)
	{
		return 1;
	}
	return 0;
}
float range_map(float in, Range inRange, Range outRange)
{
	float m, b, out;

	m = (outRange.max - outRange.min) / (inRange.max - inRange.min);
	b = outRange.max - m * inRange.max;
	out = m * in + b;

	return out;
}
void range_map_vec(int n, float in[], float out[], Range inRange, Range outRange)
{
	for (int i = 0; i < n; i++)
	{
		out[i] = range_map(in[i], inRange, outRange);
	}
}
int range_is_overlap(Range r, Range s)
{
	r.min <= s.max && s.min <= r.max;
}


//----------------------------------------------------------------------------------
// Point Structure Function Definitions
//----------------------------------------------------------------------------------

void point_set(Point* ptr, float x_in, float y_in)
{
	ptr->x = x_in;
	ptr->y = y_in;
}
void point_print(Point point, char label[])
{
	printf("\nPoint named: %s", label);
	printf("\nX: %f", point.x);
	printf("\nY: %f", point.y);

}
float point_magnitude(Point p)
{
	float magnitude;

	magnitude = p.x * p.x + p.y * p.y;
	magnitude = sqrt(magnitude);

	return magnitude;
}
Point point_unit_vector(Point p)
{
	float magnitude = point_magnitude(p);
	Point u;

	u.x = p.x / magnitude;
	u.y = p.y / magnitude;

	return u;
}
float point_slope(Point p, Point q)
{
	float m;

	m = (p.y-q.y) / (p.x-q.x);

	return m;
}
float point_distance(Point p, Point q)
{
	float distance;

	distance = (p.x - q.x)* (p.x - q.x) + (p.y - q.y)* (p.y - q.y);

	return distance;
}
Point point_midpoint(Point p, Point q)
{
	Point midpoint;

	midpoint.x = (p.x + q.x) / 2;
	midpoint.y = (p.y + q.y) / 2;

	return midpoint;
}
