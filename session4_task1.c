#include <stdio.h>
int calculateTotal(int price, int quantity){
    return price * quantity;
}
int main(){
    int price, quantity;
    printf("Enter price: ");
    scanf("%d", &price);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Total Bill = %d", calculateTotal(price, quantity));
    return 0;
}