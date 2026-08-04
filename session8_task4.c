#include<stdio.h>
void formatprice(int price){
    printf("price=%d\n", price);
}
int main(){
    printf("laptop: ");
    formatprice(50000);
    printf("mobile: ");
    formatprice(20000);
    printf("headphone: ");
    formatprice(3000);
    return 0;
}