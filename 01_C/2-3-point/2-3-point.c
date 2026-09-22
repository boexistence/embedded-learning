#include <stdio.h>

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,-1};
    int *i=a;
    while(*i!=-1){
        printf("%d\n",*i++);
    }
    return 0;
}