#ifndef MahonyAHRS_h
#define MahonyAHRS_h

//----------------------------------------------------------------------------------------------------
// Variable declaration

extern volatile float twoKp;			// 2 * proportional gain (Kp)
extern volatile float twoKi;			// 2 * integral gain (Ki)
extern volatile float q0, q1, q2, q3;	// quaternion of sensor frame relative to auxiliary frame

//---------------------------------------------------------------------------------------------------
// Function declarations

void MahonyUpdate(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz);
void MahonyUpdate(float gx, float gy, float gz, float ax, float ay, float az);

#endif
