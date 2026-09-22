#include <stdio.h>

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9};
    int *p=a;
    printf("%zu\n",sizeof(a+0));
    printf("%p %p %p\n",(void *)a,(void *)(a+1),(void *)(&a[1]));
    printf("%td",(char *)(&a+1)-(char *)&a);
    return 0;
}