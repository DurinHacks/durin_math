// EXTERNAL INCLUDES
#include <cmath>
// INTERNAL INCLUDES
#include "float3.h"
#include "float4.h"

// ************************************************************************************************
float4_t float4_create(const f32 x, const f32 y, const f32 z, const f32 w)
{
	float4_t result;
	result.x = x;
	result.y = y;
	result.z = z;
	result.w = w;
	return result;
}
// ************************************************************************************************
float4_t float4_add(const float4_t a, const float4_t b)
{
	float4_t result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;
	result.w = a.w + b.w;
	return result;
}
// ************************************************************************************************
float4_t float4_sub(const float4_t a, const float4_t b)
{
	float4_t result;
	result.x = a.x - b.x;
	result.y = a.y - b.y;
	result.z = a.z - b.z;
	result.w = a.w - b.w;
	return result;
}
// ************************************************************************************************
float4_t float4_mul(const float4_t a, const float4_t b)
{
	float4_t result;
	result.x = a.x * b.x;
	result.y = a.y * b.y;
	result.z = a.z * b.z;
	result.w = a.w * b.w;
	return result;
}
// ************************************************************************************************
float4_t float4_div(const float4_t a, const float4_t b)
{
	float4_t result;
	result.x = a.x / b.x;
	result.y = a.y / b.y;
	result.z = a.z / b.z;
	result.w = a.w / b.w;
	return result;
}
// ************************************************************************************************
float4_t float4_mul_scalar(const float4_t a, const f32 scalar)
{
	float4_t result;
	result.x = a.x * scalar;
	result.y = a.y * scalar;
	result.z = a.z * scalar;
	result.w = a.w * scalar;
	return result;
}
// ************************************************************************************************
float4_t float4_div_scalar(const float4_t a, const f32 scalar)
{
	float4_t result;
	result.x = a.x / scalar;
	result.y = a.y / scalar;
	result.z = a.z / scalar;
	result.w = a.w / scalar;
	return result;
}
// ************************************************************************************************
float4_t float4_mul_float4(const float4_t a, const float4_t b)
{
	float4_t result;
	result.w = a.w * b.w - a.x * b.x - a.y * b.y - a.z * b.z;
	result.x = a.w * b.x + a.x * b.w + a.y * b.z - a.z * b.y;
	result.y = a.w * b.y - a.x * b.z + a.y * b.w + a.z * b.x;
	result.z = a.w * b.z + a.x * b.y - a.y * b.x + a.z * b.w;
	return result;
}
// ************************************************************************************************
float4_t float4_conjugate(const float4_t q)
{
	float4_t result;
	result.w = q.w;
	result.x = -q.x;
	result.y = -q.y;
	result.z = -q.z;
	return result;
}
// ************************************************************************************************
float3_t float4_rotate_float3(const float3_t vec, const float4_t quat)
{
	float3_t uv, uuv;
	float3_t qvec = float3_create(quat.x, quat.y, quat.z);
	uv = float3_cross(qvec, vec);
	uuv = float3_cross(qvec, uv);
	uv = float3_scale(uv, 2.0f * quat.w);
	uuv = float3_scale(uuv, 2.0f);
	return float3_add(vec, float3_add(uv, uuv));
}
// ************************************************************************************************
f32 float4_magnitude(const float4_t q)
{
	return sqrtf(
		q.x * q.x +
		q.y * q.y +
		q.z * q.z +
		q.w * q.w
	);
}
// ************************************************************************************************
void float4_to_angle_axis(
	const float4_t q,
	f32* angle,
	float3_t* axis
)
{
	if (nullptr == angle || nullptr == axis)
	{
		return;
	}

	f32 sqr_length = q.x * q.x + q.y * q.y + q.z * q.z;
	if (sqr_length > 0.0f)
	{
		*angle = 2.0f * acosf(q.w);
		f32 inv_length = 1.0f / sqrtf(sqr_length);
		axis->x = q.x * inv_length;
		axis->y = q.y * inv_length;
		axis->z = q.z * inv_length;
	}
	else
	{
		*angle = 0.0f;
		axis->x = 0.0f;
		axis->y = 0.0f;
		axis->z = 1.0f;
	}
}
// ************************************************************************************************
float4_t float4_negate(
	const float4_t q
)
{
	float4_t result;
	result.x = -q.x;
	result.y = -q.y;
	result.z = -q.z;
	result.w = -q.w;
	return result;
}
// ************************************************************************************************