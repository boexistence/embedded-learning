#include <stdio.h>
#include <stdlib.h>

int main(){
    int number,i;
    printf("请输入一个数组大小: ");
    scanf("%d",&number);
    int *p=(int*)malloc(number*sizeof(int));//动态分配内存,malloc返回的是void*类型,需要强制类型转换为int*类型
    for(i=0;i<number;i++){
        scanf("%d",p+i);
    }
    printf("数组元素为: ");
    for(i=0;i<number;i++){
        printf("%d",p[i]);
    }
    free(p);//释放内存
    return 0;
}