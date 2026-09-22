#include <stdio.h>
int main(){
    int n,i;
    printf("100以内的素数为:\n");
    for(i=2;i<=100;i++){
        for(n=2;n<i;n++){
            if(i%n==0){
                break;
            }
        }
        if(n==i){
            printf("%d ",i);
        }
    }
    return 0;
}