#include <stdio.h>

int main() {
    int n=0,sum = 0,count=0;
    printf("请输入数字：");
    do{
        scanf("%d",&n);
        if(n!=-1){
        sum+=n;
        count++;
        }
    }while(n!=-1);
    double average = (double)sum / count;
    printf("平均数为: %.2f\n", average);
    return 0;
}