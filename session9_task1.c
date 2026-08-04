#include<stdio.h>
int main(){
    int dailySteps[7] = {5210, 2600, 7850, 6980, 4230, 8010, 9010};
    int i;
    printf("daily steps:\n");
    for(i=0; i<7; i++){
        printf("day %d: %dsteps\n",i+1, dailySteps[i]);
    }
    return 0;
}