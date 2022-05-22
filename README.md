# AHRS
This Library implements the following AHRS algorithms:
* Madgwick
* Mahony

The implementations are modifications from Madgwicks Ph.D, which can be found here: https://x-io.co.uk/open-source-imu-and-ahrs-algorithms/

## Usage
```
#include "Mahony.h"

int main()
{
    AHRS::Mahony filter(1.0f, 0.0f, 0.0f, 0.0f, twoKpDef, twoKiDef);
    // AHRS::Madgwick filter(1.0f, 0.0f, 0.0f, 0.0f, betaDef);

    filter.update(gx, gy, gz, ax, ay, az, mx, my, mz);

    float roll = filter.getRoll();
    float pitch = filter.getPitch();
    float yaw = filter.getYaw();

    return 1;
}
```