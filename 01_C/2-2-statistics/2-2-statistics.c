#include <stdio.h>

int main(){
    int n,x[10],i;
    const int num=10;
    for(i=0;i<num;i++){
       x[i]=0;
    }
    printf("请输入0~9: ");
    scanf("%d",&n);
    while(n!=-1){
        if(n>=0&&n<10){
            x[n]++;
        }
        scanf("%d",&n);
    }
    for(i=0;i<num;i++){
        printf("%d:%d ",i,x[i]);
    }
    return 0;
 }