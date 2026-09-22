#include <stdio.h>
int main() {
    int n, count = 0;
    printf("请输入一个整数：");
    scanf("%d", &n);
    if(n==0){
        count=1;
    }
    while(n!=0){
        n/=10;
        count++;
    }
    printf("该整数的位数是：%d\n", count);
    return 0;
}