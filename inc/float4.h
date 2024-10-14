#ifndef __MATH_FLOAT4_H__
#define __MATH_FLOAT4_H__

// EXTERNAL INCLUDES
// INTERNAL INCLUDES
#include "basetypes.h"

/**
* @brief Float4 structure
* @details This structure is used to represent a 4D vector in the game.
*/
typedef struct
{
	real w; /**< The w component of the vector */
	real x; /**< The x component of the vector */
	real y; /**< The y component of the vector */
	real z; /**< The z component of the vector */
} float4_t;

/**
* @brief float4_t constructor
* @details This function is used to create a float4_t with the given values.
* @param[in] w The w component of the vector
* @param[in] x The x component of the vector
* @param[in] y The y component of the vector
* @param[in] z The z component of the vector
* @return The created float4_t
*/
float4_t float4_create(
	const real w,
	const real x,
	const real y,
	const real z
);

/**
* @brief float4_t addition
* @details This function is used to add two float4_t together.
* @param[in] a The first float4_t
* @param[in] b The second float4_t
* @return The result of the addition
*/
float4_t float4_add(
	const float4_t a,
	const float4_t b
);

/**
* @brief float4_t subtraction
* @details This function is used to subtract two float4_t.
* @param[in] a The first float4_t
* @param[in] b The second float4_t
* @return The result of the subtraction
*/
float4_t float4_sub(
	const float4_t a,
	const float4_t b
);

/**
* @brief float4_t multiplication
* @details This function is used to multiply two float4_t.
* @param[in] a The first float4_t
* @param[in] b The second float4_t
* @return The result of the multiplication
*/
float4_t float4_mul(
	const float4_t a,
	const float4_t b
);

/**
* @brief float4_t division
* @details This function is used to divide two float4_t.
* @param[in] a The first float4_t
* @param[in] b The second float4_t
* @return The result of the division
*/
float4_t float4_div(
	const float4_t a,
	const float4_t b
);

/**
* @brief float4_t multiplication with a scalar
* @details This function is used to multiply a float4_t with a scalar.
* @param[in] a The float4_t
* @param[in] scalar The scalar
* @return The result of the multiplication
*/
float4_t float4_mul_scalar(
	const float4_t a,
	real scalar
);

/**
* @brief float4_t division with a scalar
* @details This function is used to divide a float4_t with a scalar.
* @param[in] a The float4_t
* @param[in] scalar The scalar
* @return The result of the division
*/
float4_t float4_div_scalar(
	const float4_t a,
	real scalar
);

/**
* @brief float4_t quaternion multiplication
* @details This function is used to multiply two quaternions.
* @param[in] a The float4_t
* @param[in] b The float4_t
* @return The result of the multiplication
*/
float4_t float4_mul_float4(
	const float4_t a,
	const float4_t b
);

/**
* @brief float4_t quaternion conjugate
* @details This function is used to get the conjugate of a quaternion.
* @param[in] q The float4_t
* @return The conjugate of the quaternion
*/
float4_t float4_conjugate(
	const float4_t q
);

/**
* @brief float4_t quaternion rotation
* @details This function is used to rotate a vector by a quaternion.
* @param[in] vec The vector
* @param[in] quat The quaternion
* @return The rotated vector
*/
float3_t float4_rotate_float3(
	const float3_t vec,
	const float4_t quat
);

/**
* @brief float4_t quaternion magnitude
* @details This function is used to get the magnitude of a quaternion.
* @param[in] q The float4_t
* @return The magnitude of the quaternion
*/
real float4_magnitude(
	const float4_t q
);

/**
* @brief float4_t quaternion to angle-axis
* @details This function is used to convert a quaternion to an angle-axis representation.
* @param[in] q The float4_t
* @param[out] angle The angle
* @param[out] axis The axis
*/
void float4_to_angle_axis(
	const float4_t q,
	real* angle,
	float3_t* axis
);

#endif // __MATH_FLOAT4_H__
