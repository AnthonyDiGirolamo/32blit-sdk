#pragma once

namespace blit {
    constexpr float pi = 3.14159265358979323846f;
    constexpr float kPi = 3.1415926535897932384626433832795f;
    constexpr float kHalfPi = 1.5707963267948966192313216916398f;
    constexpr float kTwoPi = 6.283185307179586476925286766559f;
    constexpr float DegreesToRadians = 0.017453292519943295769236907684886f;
    constexpr float RadiansToDegrees = 57.295779513082320876798154814105f;

    inline float radians(float deg) { return DegreesToRadians * deg; }
    inline float degrees(float rad) { return RadiansToDegrees * rad; }
}
