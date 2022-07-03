我们的设备时间，是使用设备上GPS的授时时间给设备进行时间校准的。

设备从GPS拿到的时间数据只是UTC时间。所以，不同地区的时间，需要基于UTC时间+/-时区，向西减小，向东增加。当地的时区，可以根据当地的经度进行计算，这个后面再说。

下面我们先来了解一些概念：

## **GMT与UTC时间**

GMT时间（Greenwich Mean Time，格林威治时间），之前作为全球时间的基准参考时间。

UTC时间（Universal Time Coordinated， 世界标准时间或世界协调时间），以原子时秒长为基础，在时刻上尽量接近于世界时的一种时间计量系统。UTC是基于标准的GMT提供的准确时间。

UTC时间和GMT时间其实是同一个时间，只不过UTC时间用秒来表示。

### 1、获取UTC时间

获取UTC时间的接口：

```
#include <time.h>
time_t time(time_t *tloc);
```

该接口返回1970-01-01 00:00:00 +0000至今的秒数（UTC）。

使用例子：

```
#include <stdio.h>
#include <time.h>

time_t get_utc_time(void)
{
    return time(NULL);
}

int main(int argc, char **argv)
{
    time_t utc_time = get_utc_time();
    printf("utc_time = %ld s\n", utc_time);

    return 0;
}
```

运行结果：

![图片](https://mmbiz.qpic.cn/mmbiz_png/PnO7BjBKUz9S2puyk2w9XKNdqF4siaI5qdluD7WdRGbzy4ialEjCtfSV8QuQhB5bcB9yBRiaRqgsrBhBAYTIhok5g/640?wx_fmt=png&wxfrom=5&wx_lazy=1&wx_co=1)

### 2、获取GMT时间

获取GMT时间的接口：

```
#include <time.h>
struct tm *gmtime(const time_t *timep);
```

该接口返回tm结构的GMT时间（UTC时间）。

tm结构：

```
struct tm 
{
    int tm_sec;    /* Seconds (0-60) */
    int tm_min;    /* Minutes (0-59) */
    int tm_hour;   /* Hours (0-23) */
    int tm_mday;   /* Day of the month (1-31) */
    int tm_mon;    /* Month (0-11) */
    int tm_year;   /* Year - 1900 */
    int tm_wday;   /* Day of the week (0-6, Sunday = 0) */
    int tm_yday;   /* Day in the year (0-365, 1 Jan = 0) */
    int tm_isdst;  /* Daylight saving time */
};
```

使用例子：

```
#include <stdio.h>
#include <time.h>

time_t get_utc_time(void)
{
    return time(NULL);
}

int main(int argc, char **argv)
{
    time_t utc_time = get_utc_time();
    printf("utc_time = %ld s\n", utc_time);

    struct tm *gmt_tm = gmtime(&utc_time); 
    printf("gmt time = %.4d-%.2d-%.2d %.2d:%.2d:%.2d\n", gmt_tm->tm_year + 1900,
                                                         gmt_tm->tm_mon + 1,
                                                         gmt_tm->tm_mday,
                                                         gmt_tm->tm_hour,
                                                         gmt_tm->tm_min,
                                                         gmt_tm->tm_sec);

    return 0;
}
```

运行结果：

![图片](https://mmbiz.qpic.cn/mmbiz_png/PnO7BjBKUz9S2puyk2w9XKNdqF4siaI5qJiah2JtibVOBXVgkNjLZRcXAnyr2jDHicsZuPyk7VzEdahQ61kswWH0Sw/640?wx_fmt=png&wxfrom=5&wx_lazy=1&wx_co=1)

## **时区**

由于世界各国家与地区经度不同，地方时区也有所不同，因此会划分为不同的时区。

正式的时区划分包括24个时区，每一时区由一个英文字母表示。每隔经度15°划分一个时区，有一个例外，每个时区有一条中央子午线。

### 1、时区划分方法：

现今全球共分为24个时区。英国（格林尼治天文台旧址）为中时区（零时区）、东1—12区，西1—12区。每个时区横跨经度15度，时间正好是1小时。最后的东、西第12区各跨经度7.5度，以东、西经180度为界。每个时区的中央经线上的时间就是这个时区内统一采用的时间，称为区时，相邻两个时区的时间相差1小时。

### 2、经度范围：

![图片](https://mmbiz.qpic.cn/mmbiz_png/PnO7BjBKUz9S2puyk2w9XKNdqF4siaI5qWV6L7ic02jfzFiaQ3PANRqpugHWnMWk7lLe8VAh2e5lS4N1eeQic8GLGA/640?wx_fmt=png&wxfrom=5&wx_lazy=1&wx_co=1)

### 3、当地时区计算

需要用到的接口：

```
#include <time.h>
struct tm *localtime(const time_t *timep);
```

计算当地时区：

```
#include <stdio.h>
#include <time.h>

time_t get_utc_time(void)
{
    return time(NULL);
}

int main(int argc, char **argv)
{
    time_t utc_time = get_utc_time();
    printf("utc_time = %ld s\n", utc_time);

    struct tm *gmt_tm = gmtime(&utc_time); 
    printf("gmt time = %.4d-%.2d-%.2d %.2d:%.2d:%.2d\n", gmt_tm->tm_year + 1900,
                                                         gmt_tm->tm_mon + 1,
                                                         gmt_tm->tm_mday,
                                                         gmt_tm->tm_hour,
                                                         gmt_tm->tm_min,
                                                         gmt_tm->tm_sec);
    int gmt_hour = gmt_tm->tm_hour;

    struct tm *local_tm = localtime(&utc_time); 
    printf("local time = %.4d-%.2d-%.2d %.2d:%.2d:%.2d\n", local_tm->tm_year + 1900,
                                                           local_tm->tm_mon + 1,
                                                           local_tm->tm_mday,
                                                           local_tm->tm_hour,
                                                           local_tm->tm_min,
                                                           local_tm->tm_sec);
    int local_hour = local_tm->tm_hour;


    int local_time_zone = local_hour - gmt_hour;
    if (local_time_zone < -12) 
    {
        local_time_zone += 24; 
    } 
    else if (local_time_zone > 12) 
    {
        local_time_zone -= 24;
    }else{}

    printf("local_time_zone = %d\n", local_time_zone);

    return 0;
}
```

我们当前为北京时间：

![图片](https://mmbiz.qpic.cn/mmbiz_png/PnO7BjBKUz9S2puyk2w9XKNdqF4siaI5qZ6FPNMkEaGFxK08flVGHrfaRiaMaRRk9y5HXr1sA8DIe0Ex6KY4tdpw/640?wx_fmt=png&wxfrom=5&wx_lazy=1&wx_co=1)

我们把Ubuntu时间日期里的地点改到其它国家：

![图片](https://mmbiz.qpic.cn/mmbiz_png/PnO7BjBKUz9S2puyk2w9XKNdqF4siaI5qaaZ9ItZnsC2eD2rbr0knP2EqBYyrB9ibFZqTln0AGxoNXY5db5LBJZA/640?wx_fmt=png&wxfrom=5&wx_lazy=1&wx_co=1)

![图片](https://mmbiz.qpic.cn/mmbiz_png/PnO7BjBKUz9S2puyk2w9XKNdqF4siaI5qJG9HNglHOp0ehicqLqoA7Jh534A1NsT68ic5vGTjKDfgl5hSUMibtqasQ/640?wx_fmt=png&wxfrom=5&wx_lazy=1&wx_co=1)

## **CST 时间**

CST (China Standard Time，中国标准时间)。

中国标准时间一般指北京时间。北京时间是中国采用国际时区东八时区的区时作为标准时间。而中国幅员辽阔，东西相跨5个时区（即东五区、东六区、东七区、东八区、东九区5个时区）

“北京时间”适用于中国（大陆、港澳、台湾）境内，但在大陆的新疆、西藏等地，政府机关、企事业单位作息时间和邮政通讯费用优惠分界点虽然用北京时间来表示，但也比其他各省延晚2小时，使用UTC+6的情况更为普遍。

## **根据经度计算时区**

时区范围是中央经线的度数向左右分别减、加7.5度。用该地的经度除以15度，当余数小于7.5度时，商数即为该地所在的时区数，当余数大于7.5度时，商数加1即为该地所在的时区数。

```
#include <stdio.h>
#include <time.h>

int calc_timezone(double longitude)
{
    int timezone = 0;
    int quotient = (int)(longitude / 15);
    double remainder = (longitude - quotient * 15);
    printf("quotient = %d, remainder = %lf\n", quotient, remainder);

    if (remainder <= 7.5)
    {
        timezone = quotient;
    }
    else
    {
        timezone = quotient + (quotient >= 0 ? + 1 : -1);
    }

    return timezone;
}

int main(int argc, char **argv)
{
    while (1)
    {
        double longitude = 0.0;
        printf("please input longitude:");
        scanf("%lf", &longitude);
        printf("longitude = %lf\n", longitude);
        int timezone = calc_timezone(longitude);
        printf("timezone = %d\n", timezone);
    }

    return 0;
}
```

这其实也是百度百科上提供的思路：

![图片](https://mmbiz.qpic.cn/mmbiz_png/PnO7BjBKUz9S2puyk2w9XKNdqF4siaI5qicvDBGDb5RHIaEyMM9FGianJAicdISibibld8woFHm9OISJts3r5EaewuZA/640?wx_fmt=png&wxfrom=5&wx_lazy=1&wx_co=1)

这种方式至少可以计算得到时区中心线的时区数，但是一些临界情况可能会差1小时。在网络上也没有找到其它更好的解决方案。