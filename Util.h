#pragma once

namespace AHRS {

const float degToRadFactor = 0.0174532925199433f;
const float radToDegFactor = 57.29577951308233f;

/**
 * @brief Fast inverse square-root
 * See: http://en.wikipedia.org/wiki/Fast_inverse_square_root
 * @param x
 * @return (float)
 */
inline float invSqrt(float x)
{
    float halfx = 0.5f * x;
    float y = x;
    long i = *(long*)&y;
    i = 0x5f3759df - (i >> 1);
    y = *(float*)&i;
    y = y * (1.5f - (halfx * y * y));
    return y;
}

} // namespace AHRS
