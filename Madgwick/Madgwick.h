#pragma once

#define sampleFreq 100.0f // sample frequency in Hz
#define betaDef 0.1f // 2 * proportional gain

namespace AHRS {

class Madgwick {
private:
    volatile float beta = betaDef; // algorithm gain
    volatile float q0 = 1.0f, q1 = 0.0f, q2 = 0.0f, q3 = 0.0f; // quaternion of sensor frame relative to auxiliary frame

public:
    Madgwick();
    Madgwick(float q0, float q1, float q2, float q3, float beta=betaDef);
    ~Madgwick();

    void update(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz);
    void update(float gx, float gy, float gz, float ax, float ay, float az);

    float getRoll();
    float getPitch();
    float getYaw();
};

} // namespace AHRS
