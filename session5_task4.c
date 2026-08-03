#include<stdio.h>
int main(){
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age>=18){
    printf("eligible for driving license\n");
    }
    if(age>=21){
    printf("eligible for credit card\n");
    }
    if(age>=25){
        printf("eligible for car rental\n");
    }
     return 0;
}