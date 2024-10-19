// EXTERNAL INCLUDES
#include <cmath>
// INTERNAL INCLUDES
#include "float4x4.h"

// ************************************************************************************************
float4x4_t float4x4_create(
	float m00, float m01, float m02, float m03,
	float m10, float m11, float m12, float m13,
	float m20, float m21, float m22, float m23,
	float m30, float m31, float m32, float m33
)
{
	float4x4_t result;
	result.m[0][0] = m00; result.m[0][1] = m01; result.m[0][2] = m02; result.m[0][3] = m03;
	result.m[1][0] = m10; result.m[1][1] = m11; result.m[1][2] = m12; result.m[1][3] = m13;
	result.m[2][0] = m20; result.m[2][1] = m21; result.m[2][2] = m22; result.m[2][3] = m23;
	result.m[3][0] = m30; result.m[3][1] = m31; result.m[3][2] = m32; result.m[3][3] = m33;
	return result;
}
// ************************************************************************************************
float4x4_t float4x4_create_rows(
	float4_t row0,
	float4_t row1,
	float4_t row2,
	float4_t row3
)
{
	float4x4_t result;
	result.rows[0] = row0;
	result.rows[1] = row1;
	result.rows[2] = row2;
	result.rows[3] = row3;
	return result;
}
// ************************************************************************************************
float4_t float4x4_get_translation(
	const float4x4_t* matrix
)
{
	return matrix->location;
}
// ************************************************************************************************
