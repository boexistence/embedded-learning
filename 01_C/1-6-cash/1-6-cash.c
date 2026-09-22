#include <stdio.h>
int main() {
    int price,cash;
    printf("请输入商品价格: ");
    scanf("%d", &price);    
    printf("请输入支付金额: ");
    scanf("%d", &cash);
    if(cash>=price){
    printf("找零: %d\n", cash-price);
    }
    else{
    printf("支付金额不足\n");
    }
    return 0;
}