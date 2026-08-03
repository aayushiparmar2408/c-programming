#include<stdio.h>
int main(){
    float bill;
    printf("enter bill:");
    scanf("%f",&bill);
    if(bill>=1000){
        if(bill>=2000){
            bill = bill-(bill*20/100);
        }
        else{
            bill = bill-(bill*10/100);
        }
    }
    printf("final bill amount =%f",bill);
    return 0,
}