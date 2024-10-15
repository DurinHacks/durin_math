// EXTERNAL INCLUDES
#include <cmath>
// INTERNAL INCLUDES
#include "float2.h"

// ************************************************************************************************
float2_t float2_add(const float2_t a, const float2_t b)
{
	float2_t result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return result;
}
// ************************************************************************************************
float2_t float2_sub(const float2_t a, const float2_t b)
{
	float2_t result;
	result.x = a.x - b.x;
	result.y = a.y - b.y;
	return result;
}
// ************************************************************************************************
float2_t float2_scale(const float2_t a, const real scalar)
{
	float2_t result;
	result.x = a.x * scalar;
	result.y = a.y * scalar;
	return result;
}
// ************************************************************************************************
real float2_dot(const float2_t a, const float2_t b)
{
	return a.x * b.x + a.y * b.y;
}
// ************************************************************************************************
real float2_cross(const float2_t a, const float2_t b)
{
	return a.x * b.y - a.y * b.x;
}
// ************************************************************************************************
real float2_length(const float2_t a)
{
	return sqrtf(a.x * a.x + a.y * a.y);
}
// ************************************************************************************************
real float2_sqr_length(const float2_t a)
{
	return a.x * a.x + a.y * a.y;
}
// ************************************************************************************************
real float2_distance(const float2_t a, const float2_t b)
{
	return float2_length(float2_sub(a, b));
}
// ************************************************************************************************
real float2_angle(const float2_t a, const float2_t b)
{
	return atan2f(float2_cross(a, b), float2_dot(a, b));
}
// ************************************************************************************************
float2_t float2_normalize(const float2_t a)
{
	real length = float2_length(a);
	float2_t result;
	result.x = a.x / length;
	result.y = a.y / length;
	return result;
}
// ************************************************************************************************
