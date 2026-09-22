#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess,number,count=0;
    srand(time(0));
    number=rand()%100+1;
    printf("请输入1~100之间的整数:");
    do{
        scanf("%d",&guess);
        count++;
        if(guess<number){
            printf("你猜的数字太小了\n");
        }
        if(guess>number){
        printf("你猜的数字太大了\n");
        }
    }while(guess!=number);
    printf("恭喜你，猜对了！\n");
    printf("你总共猜了 %d 次。\n", count);
    return 0;
}