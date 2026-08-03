#include<stdio.h>
int main(){
    char p[] = "wireless mouse";
    float pr = 499.99;
    double r = 4.5;
    printf("product:%s\n",p);
    printf("price: %.2f\n",pr);
    printf("rating: %.1lf\n",r);
    return 0;
}