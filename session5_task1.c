#include<stdio.h>
#include<string.h>
int main(){
    char team[20];
    printf("enter ipl team:");
    scanf("%s",team);
    
    if(strcmp(team,"CSK")==0){
        printf("chennai super kings for the wins!");
    }
    else if(strcmp(team,"GT")==0){
        printf("go gujarat titans!");
    }
    else{
        printf("team no found!");
    }
    return 0;
}