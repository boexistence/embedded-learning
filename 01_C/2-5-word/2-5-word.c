#include <stdio.h>
//利用数组保存的字符串可以修改，也可以通过指针修改  char str[]="Hellow World"
//利用指针保存的字符串不可修改  char *p="Hellow World"

int main(){
    char str [10]="Hellow";//利用数组保存字符串，最后有个0以辨别字符串是否结束
    printf("这个字符串是：%s\n",str);
    printf("请填入9个字符,以修改这个字符串\n");
    scanf("%9s",str);//9用来限制读入的字符串长度不超过数组
    char *p=str;
    printf("这个字符串被改为：%s",p);
    printf("请填入5个字符,以修改这个字符串\n");
    scanf("%5s",p);
    printf("这个字符串被改为：%s",p);
    return 0;
}