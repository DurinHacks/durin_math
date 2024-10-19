#ifndef __MATH_FLOAT4x4_H__
#define __MATH_FLOAT4x4_H__

// EXTERNAL INCLUDES
// INTERNAL INCLUDES
#include "basetypes.h"
#include "float4.h"

/**
* @brief Float4x4 structure
* @details This structure is used to represent a 4D matrix.
*/
typedef struct float4x4_t
{
	//union
	//{
		//float m[4][4];		/**< The matrix as a 2D array */
		float4_t rows[4];	/**< The rows of the matrix */
		//struct
		//{
		//	float4_t forward;	/**< The forward vector */
		//	float4_t right;		/**< The right vector */
		//	float4_t up;		/**< The up vector */
		//	float4_t location;	/**< The location vector */
		//};
	//};
} float4x4_t;

#endif // __MATH_FLOAT4x4_H__