#include<stdio.h>
int main(){
    float price, discount, finalPrice;
    int member;
    printf("Enter product price: ");
    scanf("%f", &price);
    printf("Enter discount percentage: ");
    scanf("%f", &discount);
    printf("member? (1 = Yes, 0 = No): ");
    scanf("%d", &member);
    finalPrice = price - (price * discount / 100);
    if (member)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }
    printf("Final Price = %.2f", finalPrice);
    return 0;
}