#include <stdio.h>

int main(){
    int n,ret;
    printf("请输入一个整数:");
    scanf("%d",&n);
    ret=1;
    for(n;n!=1;n--){
        ret*=n;
    }
    printf("阶乘为: %d\n", ret);
    return 0;
}