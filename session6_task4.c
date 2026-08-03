#include<stdio.h>
int main(){
    int i = 1;
    printf("forloop\n");
    for(i=5; i<5; i++){
        printf("%d\n",i);
    }
    printf("do whileloop\n");
    i = 5;
    do{
        printf("%d\n",i);
    }
    while(i<5);
    return 0;
}