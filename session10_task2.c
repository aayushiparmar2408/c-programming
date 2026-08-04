#include <stdio.h>
#include <string.h>
int main(){
    char name1[20], name2[20];
    printf("Enter First Username: ");
    scanf("%s", name1);
    printf("Enter Second Username: ");
    scanf("%s", name2);
    if(strcmp(name1, name2) == 0){
        printf("Same");
    }
    else{
        printf("Different");
    }
    return 0;
}