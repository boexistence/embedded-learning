#include <stdio.h>

int main() {
    int n,a=1,b,c;
    printf("请输入位数n: ");
    scanf("%d",&n);
    for(int x=n;x>0;x--){//计算n位数的上限
        a*=10;
    }
    printf("%d位数的水仙数有:\n",n);
    for(b=a/10;b<a;b++){
        c=b;
        int rst=0;
        while(c!=0){
            int dig=1;
            for(int i=n;i>0;i--){//计算每一位的n次方
                dig*=c%10;
            }
            rst+=dig;//累加每一位的n次方
            c/=10;
        }
        if(rst==b){//判断是否为水仙数
            printf("%d\n",b);
        }
    }
    return 0;
}