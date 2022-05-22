#ifndef Madgwick_h
#define Madgwick_h

//----------------------------------------------------------------------------------------------------
// Variable declaration

extern volatile float beta;				// algorithm gain
extern volatile float q0, q1, q2, q3;	// quaternion of sensor frame relative to auxiliary frame

//---------------------------------------------------------------------------------------------------
// Function declarations

void MadgwickUpdate(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz);
void MadgwickUpdate(float gx, float gy, float gz, float ax, float ay, float az);

#endif
