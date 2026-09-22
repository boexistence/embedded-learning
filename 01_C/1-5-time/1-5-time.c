#include <stdio.h>
int main() {
    int hour1,minute1,hour2,minute2,time;
    printf("请输入第一个时间（小时 分钟）");
    scanf("%d %d",&hour1,&minute1);
    printf("请输入第二个时间（小时 分钟）");
    scanf("%d %d",&hour2,&minute2);
    time=(hour2-hour1)*60+(minute2-minute1);
    printf("两个时间的差值为：%d小时%d分钟\n",time/60,time%60);
    return 0;
}