#pragma once

#define sampleFreq 100.0f // sample frequency in Hz
#define twoKpDef (2.0f * 0.5f) // 2 * proportional gain
#define twoKiDef (2.0f * 0.0f) // 2 * integral gain

namespace AHRS {

class Mahony {
private:
    float twoKp = twoKpDef; // 2 * proportional gain (Kp)
    float twoKi = twoKiDef; // 2 * integral gain (Ki)
    float q0 = 1.0f, q1 = 0.0f, q2 = 0.0f, q3 = 0.0f; // quaternion of sensor frame relative to auxiliary frame
    float integralFBx = 0.0f, integralFBy = 0.0f, integralFBz = 0.0f; // integral error terms scaled by Ki

public:
    Mahony();
    Mahony(float q0, float q1, float q2, float q3, float twoKp = twoKpDef, float twoKi = twoKiDef);
    ~Mahony();

    void update(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz);
    void update(float gx, float gy, float gz, float ax, float ay, float az);

    float getRoll();
    float getPitch();
    float getYaw();
};

} // namespace AHRS
