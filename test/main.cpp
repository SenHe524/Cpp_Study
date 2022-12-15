#include <iostream>
#include <string>
using namespace std;
typedef union 
{
    int16_t data_int32;
    unsigned char data8[4];
}union_int32;
typedef union 
{
    int8_t data_int8;
    unsigned char data8;
}union_int8;

// unsigned char cal_table(unsigned char value)
// {
//     unsigned char i,crc;
//     crc = value;
//     for(i = 8; i>0;i--)
//     {
//         if(crc & 0x01)
//         crc = (crc >> 1) ^ 0x8c;
//         else
//         crc = (crc >> 1);
//     }
//     return crc;

// }

// void create_table(void)
// {
//     unsigned short i;
//     unsigned char j;
//     for(i = 0; i <= 0xFF; i++)
//     {
//         if(0 == (i % 16))
//         printf("\n");
//         j = i&0xFF;
//         printf("0x%2x,",cal_table(j));

//     }

// }
#define PI 3.1515926f
typedef struct
{
	float accel_x;			/*uinit: m/s2*/
	float accel_y;
	float accel_z;

	float angle_x;			/*uinit: ° (deg)/s*/
	float angle_y;
	float angle_z;
	
    float mag_x;			/*uinit: 归一化值*/
	float mag_y;
	float mag_z;

	float raw_mag_x;		/*uinit: mGauss*/
	float raw_mag_y;
	float raw_mag_z;

	float pitch;			/*uinit: ° (deg)*/
	float roll;
	float yaw;
	
	float quaternion_data0;
	float quaternion_data1;	
	float quaternion_data2;
	float quaternion_data3;
}imu_info_t;
imu_info_t imu_info;
typedef union 
{
    float data_float;
    uint8_t data8[4];
}union_float;
union_float imu_data;

typedef struct
{
	float accel_x;			/*uinit: m/s2*/
	float accel_y;
	float accel_z;

	float angle_x;			/*uinit: ° (deg)/s*/
	float angle_y;
	float angle_z;

	float pitch;			/*uinit: ° (deg)*/
	float roll;
	float yaw;
	
	float quaternion_data0;
	float quaternion_data1;	
	float quaternion_data2;
	float quaternion_data3;
}protocol_info_t;
protocol_info_t iih;
int main(void)
{
    imu_info.accel_x = 2.041f;
    imu_info.accel_y = 6.842f;
    imu_info.accel_z = 4.151f;
    imu_info.angle_x = 8.941f;
    imu_info.angle_y = 4.011f;
    imu_info.angle_z = 3.247f;

    imu_info.mag_x = 2.041f;
    imu_info.mag_y = 6.842f;
    imu_info.mag_z = 4.151f;
    imu_info.raw_mag_x = 8.941f;
    imu_info.raw_mag_y = 4.011f;
    imu_info.raw_mag_z = 3.247f;


    imu_info.pitch = 5.104f;
    imu_info.roll = 6.210f;
    imu_info.yaw = 8.102f;
    imu_info.quaternion_data0 = 0.227f;
    imu_info.quaternion_data1 = 0.527f;
    imu_info.quaternion_data2 = 0.455f;
    imu_info.quaternion_data3 = 0.125f;
    uint8_t ret_buf[64]={0};
	uint8_t imu_cnt = 0;
    for(int i = 0; i < 3; i++)
	{
		imu_data.data_float = *(&(imu_info.accel_x)+i);
		ret_buf[imu_cnt++] = imu_data.data8[0];
		ret_buf[imu_cnt++] = imu_data.data8[1];
		ret_buf[imu_cnt++] = imu_data.data8[2];
		ret_buf[imu_cnt++] = imu_data.data8[3];
	}
	for(int i = 0; i < 3; i++)
	{//(*(&(imu_info.angle_x)+i) * PI) / 180.0f
		imu_data.data_float = *(&(imu_info.angle_x)+i);
		ret_buf[imu_cnt++] = imu_data.data8[0];
		ret_buf[imu_cnt++] = imu_data.data8[1];
		ret_buf[imu_cnt++] = imu_data.data8[2];
		ret_buf[imu_cnt++] = imu_data.data8[3];
	}
	for(int i = 0; i < 3; i++)
	{
		imu_data.data_float = *(&(imu_info.pitch)+i);
		ret_buf[imu_cnt++] = imu_data.data8[0];
		ret_buf[imu_cnt++] = imu_data.data8[1];
		ret_buf[imu_cnt++] = imu_data.data8[2];
		ret_buf[imu_cnt++] = imu_data.data8[3];
	}
	for(int i = 0; i < 4; i++)
	{
		imu_data.data_float = *(&(imu_info.quaternion_data0)+i);
		ret_buf[imu_cnt++] = imu_data.data8[0];
		ret_buf[imu_cnt++] = imu_data.data8[1];
		ret_buf[imu_cnt++] = imu_data.data8[2];
		ret_buf[imu_cnt++] = imu_data.data8[3];
	}

    memcpy(&iih, ret_buf, 52);

    printf("%f ", iih.accel_x);
    printf("%f ", iih.accel_y);
    printf("%f ", iih.accel_z);
    printf("%f ", iih.angle_x);
    printf("%f ", iih.angle_y);
    printf("%f ", iih.angle_z);
    printf("%f ", iih.pitch);
    printf("%f ", iih.roll);
    printf("%f ", iih.yaw);
    printf("%f ", iih.quaternion_data0);
    printf("%f ", iih.quaternion_data1);
    printf("%f ", iih.quaternion_data2);
    printf("%f ", iih.quaternion_data3);
    // uint8_t buf[128] = {0};

    // union_int8 k;
    // k.data_int8 = 15;
    // uint8_t j;
    // j = k.data_int8;
    // union_int8 m;
    // m.data8 = j;
    // int8_t l;
    // l = j;
    // printf("%x\n", k.data_int8);
    // printf("%x\n", k.data8);
    // printf("%x\n", j);
    // printf("%x\n", m.data_int8);
    // printf("%x\n", m.data8);
    // printf("%x\n", l);
    // printf("%d\n", k.data_int8);
    // printf("%d\n", k.data8);
    // printf("%d\n", j);
    // printf("%d\n", m.data_int8);
    // printf("%d\n", m.data8);
    // printf("%d\n", l);

    // for(int i = 0; i < 8; ++i)
    // {
    //     printf("%d\n", i);
    // }

    system("pause");
    return 0;
}