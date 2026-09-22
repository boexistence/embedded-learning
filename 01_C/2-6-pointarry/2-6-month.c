#include <stdio.h>

int main(void){
    int month;
    printf("请输入月份：");
    scanf("%d",&month);
    //数组指针 指向数组的指针 int (*a)[];
    char *a[]={//指针数组
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    //函数指针 类型和参数都和指向的函数相同 int add(int int) int (*p)(int int)=add;
    printf("%s",a[month-1]);
    return 0;
}