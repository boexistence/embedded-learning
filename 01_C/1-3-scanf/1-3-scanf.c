#include <stdio.h>
int main() {
    int a,change;
    printf("请输入金额: ");
    scanf("%d", &a);
    change=100-a;
    printf("找零: %d\n", change);
    return 0;
}