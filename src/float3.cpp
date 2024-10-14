// EXTERNAL INCLUDES
#include <cmath>
// INTERNAL INCLUDES
#include "float3.h"

// ************************************************************************************************
float3_t float3_create(
	const real x,
	const real y,
	const real z
)
{
	float3_t result;
	result.x = x;
	result.y = y;
	result.z = z;
	return result;
}
// ************************************************************************************************
float3_t float3_add(const float3_t a, const float3_t b)
{
	float3_t result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;
	return result;
}
// ************************************************************************************************
float3_t float3_sub(const float3_t a, const float3_t b)
{
	float3_t result;
	result.x = a.x - b.x;
	result.y = a.y - b.y;
	result.z = a.z - b.z;
	return result;
}
// ************************************************************************************************
float3_t float3_mul(const float3_t a, const float3_t b)
{
	float3_t result;
	result.x = a.x * b.x;
	result.y = a.y * b.y;
	result.z = a.z * b.z;
	return result;
}
// ************************************************************************************************
float3_t float3_div(const float3_t a, const float3_t b)
{
	float3_t result;
	result.x = a.x / b.x;
	result.y = a.y / b.y;
	result.z = a.z / b.z;
	return result;
}
// ************************************************************************************************
float3_t float3_scale(const float3_t a, const real scalar)
{
	float3_t result;
	result.x = a.x * scalar;
	result.y = a.y * scalar;
	result.z = a.z * scalar;
	return result;
}
// ************************************************************************************************
real float3_dot(const float3_t a, const float3_t b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}
// ************************************************************************************************
float3_t float3_cross(const float3_t a, const float3_t b)
{
	float3_t result;
	result.x = a.y * b.z - a.z * b.y;
	result.y = a.z * b.x - a.x * b.z;
	result.z = a.x * b.y - a.y * b.x;
	return result;
}
// ************************************************************************************************
real float3_length(const float3_t a)
{
	return sqrtf(a.x * a.x + a.y * a.y + a.z * a.z);
}
// ************************************************************************************************
real float3_sqr_length(const float3_t a)
{
	return a.x * a.x + a.y * a.y + a.z * a.z;
}
// ************************************************************************************************
real float2_distance(const float3_t a, const float3_t b)
{
	return float3_length(float3_sub(a, b));
}
// ************************************************************************************************
real float3_angle(const float3_t a, const float3_t b)
{
	return acosf(float3_dot(a, b) / (float3_length(a) * float3_length(b)));
}
// ************************************************************************************************
float3_t float3_normalize(const float3_t a)
{
	real length = float3_length(a);
	float3_t result;
	result.x = a.x / length;
	result.y = a.y / length;
	result.z = a.z / length;
	return result;
}
// ************************************************************************************************
