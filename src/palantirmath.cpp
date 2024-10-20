
// EXTERNAL INCLUDES
// INTERNAL INCLUDES
#include "palantirmath.h"

// ************************************************************************************************
float clamp(float fov, float min, float max)
{
	return min * (fov < min) +
		max * (fov > max) +
		fov * (fov >= min && fov <= max);
}
// ************************************************************************************************
float lerp(float a, float b, float t)
{
	return a + (b - a) * t;
}
// ************************************************************************************************
float in_out_sine(const float t)
{
	return -0.5f * (cos(PI * t) - 1.0f);
}
// ************************************************************************************************
