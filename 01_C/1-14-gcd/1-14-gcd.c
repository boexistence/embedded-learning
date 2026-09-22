#include <stdio.h>
int main(){
    int a,b,t;
    printf("请输入两个整数:\n");
    scanf("%d %d",&a,&b);
    // 使用辗转相除法求最大公约数
    //用a%b求余数，直到余数为0时，a就是最大公约数
        while(b!=0){
            t=a%b;
            a=b;
            b=t;
        }
    printf("最大公约数是: %d\n", a);
    return 0;
}