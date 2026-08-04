#include<stdio.h>
int main(){
    int playlistrating[3][5]={
        {1,2,3,4,5},
        {5,4,3,2,1},
        {3,3,3,3,3},
    };
    int i;
    printf("second playlist rating:\n");
    for(i=0; i<5; i++){
        printf("%d",playlistrating[1][i]);
    }
    return 0;
}