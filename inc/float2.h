#ifndef __MATH_FLOAT2_H__
#define __MATH_FLOAT2_H__

// EXTERNAL INCLUDES
// INTERNAL INCLUDES
#include "basetypes.h"

/**
* @brief Float2 structure
* @details This structure is used to represent a 2D vector in the game.
*/
typedef struct float2_t
{
	real x; /**< The x component of the vector */
	real y; /**< The y component of the vector */
} float2_t;

/**
* @brief Adds two float2_t vectors
* @param[in] a The first vector
* @param[in] b The second vector
* @return The sum of the two vectors
*/
float2_t float2_add(const float2_t a, const float2_t b);

/**
* @brief Subtracts two float2_t vectors
* @param[in] a The first vector
* @param[in] b The second vector
* @return The difference of the two vectors
*/
float2_t float2_sub(const float2_t a, const float2_t b);

/**
* @brief Scales a float2_t vector
* @param[in] a The vector to scale
* @param[in] scalar The scalar to multiply the vector by
* @return The scaled vector
*/
float2_t float2_scale(const float2_t a, const real scalar);

/**
* @brief Calculates the dot product of two float2_t vectors
* @param[in] a The first vector
* @param[in] b The second vector
* @return The dot product of the two vectors
*/
real float2_dot(const float2_t a, const float2_t b);

/**
* @brief Calculates the cross product of two float2_t vectors
* @param[in] a The first vector
* @param[in] b The second vector
* @return The cross product of the two vectors
*/
real float2_cross(const float2_t a, const float2_t b);

/**
* @brief Calculates the length of a float2_t vector
* @param[in] a The vector to calculate the length of
* @return The length of the vector
*/
real float2_length(const float2_t a);

/**
* @brief Calculates the squared length of a float2_t vector
* @param[in] a The vector to calculate the squared length of
* @return The squared length of the vector
*/
real float2_sqr_length(const float2_t a);

/**
* @brief Calculates the distance between two float2_t vectors
* @param[in] a The first vector
* @param[in] b The second vector
* @return The distance between the two vectors
*/
real float2_distance(const float2_t a, const float2_t b);

/**
* @brief Calculates the angle between two float2_t vectors
* @param[in] a The first vector
* @param[in] b The second vector
* @return The angle between the two vectors
*/
real float2_angle(const float2_t a, const float2_t b);

/**
* @brief Normalizes a float2_t vector
* @param[in] a The vector to normalize
* @return The normalized vector
*/
float2_t float2_normalize(const float2_t a);

#endif // __MATH_FLOAT2_H__
