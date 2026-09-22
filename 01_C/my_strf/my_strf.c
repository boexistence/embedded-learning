#include <stdio.h>
#include <stdlib.h>

void my_strcpy(char *a, const char* b){//使用前要确保给a分配足够的内存
    while(*(a++)=*(b++));
}

int my_strlen(const char*a){//只是计算字符串的个数不是占用内存的大小，即不包括'0'
    int n=0;
    while(*(a++)){
        n++;
    }
    return n;
}

void *my_memcpy(void *a, const void *b,int c){
    char *dest=(char *)a;
    const char*src=(const char *)b;
    for(int i=0;i<c;i++){
        dest[i]=src[i];//有指定长度的复制用数组
    }
    return a;
}

int main(){
    char b[10]="Xavier";//复制内容
    char *a=(char*)malloc(10);//为指针a分配空间
    my_strcpy(a,b);
    printf("复制后的数组为：");
    char *c=a;
    while(*c){
        printf("%c",*(c++));//打印复制后的内容
    }
    printf("\n");
    printf("其长度为%d\n",my_strlen(a));

    int ary[8]={1,3,6,3,7,9,4};
    int ary1[8]={0};
    int i=0;
    my_memcpy(ary1,ary,8);
    while(ary1[i]){
        printf("%d ",ary1[i++]);
    }
    return 0;
}