#include <stdio.h>

int main(){
    int n,sum=0,ary[100],i=0,cnt=0,rst=0;
    printf("请输入数字: ");
    scanf("%d",&n);
    while(n!=-1){
        ary[i++]=n;
        rst+=n;
        cnt++;
        scanf("%d",&n);
    }
    printf("小于平均数的数字有: ");
    for(i=0;i<cnt;i++){
        if(ary[i]<rst/cnt){
            printf("%d ",ary[i]);
        }
    }
    return 0;
}