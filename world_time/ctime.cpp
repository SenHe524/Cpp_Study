#include <iostream>
#include <ctime>
using namespace std;

time_t get_utc_time(void)
{
    return time(NULL);
}

int main ()
{
    // utc 时间接口，返回1970.1.1.0000到现在的秒数
    time_t utc_time = get_utc_time();
    // printf("utc_time = %ld s\n", utc_time);
    cout << "utc_time = " << utc_time << endl;
    cout << "utc_time = " << utc_time / 3600 / 24 / 365 << endl;
    cout << 365 * 52 << endl;
    cout << "utc_time = " << utc_time / 3600 / 24 << endl;
    
    system("pause");
    return 0;
}