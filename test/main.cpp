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


int main(void)
{

	// cout << sizeof(int) << endl;
	// cout << sizeof(char) << endl;
	// cout << sizeof(float) << endl;
	// cout << sizeof(double) << endl;
	// cout << sizeof(bool) << endl;

	// cout << (~(0x64)+1) << endl;
    // create_table();

    // union_int32 data1;
    // data1.data_int32 = 0;
    // data1.data8[0] = 0x9C;
    // data1.data8[1] = 0xFF;
    // printf("%d", data1.data_int32);
    // printf("%d", abs(data1.data_int32));

    union_int8 k;
    k.data_int8 = 15;
    uint8_t j;
    j = k.data_int8;
    union_int8 m;
    m.data8 = j;
    int8_t l;
    l = j;
    printf("%x\n", k.data_int8);
    printf("%x\n", k.data8);
    printf("%x\n", j);
    printf("%x\n", m.data_int8);
    printf("%x\n", m.data8);
    printf("%x\n", l);
    printf("%d\n", k.data_int8);
    printf("%d\n", k.data8);
    printf("%d\n", j);
    printf("%d\n", m.data_int8);
    printf("%d\n", m.data8);
    printf("%d\n", l);

    for(int i = 0; i < 8; ++i)
    {
        printf("%d\n", i);
    }

    system("pause");
    return 0;
}