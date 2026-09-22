#include <stdio.h>

int main(){
    int a,b=0;
    printf("请输入一个整数:");
    scanf("%d",&a);
    while(a!=0){
        b=b*10+a%10;
        a/=10;
    }
    printf("反转后的数为: %d\n", b);
    return 0;
}