#include<stdio.h>
int main(){
    do{
        printf("guess the song\n");
        printf("1. old song\n");
        printf("2. party song\n");
        printf("3. english song\n");
        printf("enter answer: ");
        scanf("%d", &answer);

    }
    while(answer != 2);
    printf("correct answer");
    return 0;
}