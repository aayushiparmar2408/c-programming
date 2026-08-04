#include <stdio.h>
int main(){
    int cricketScores[3][2] = {
        {150, 180},
        {200, 170},
        {160, 190}
    };
    int i;
    for(i = 0; i < 3; i++){
        if(cricketScores[i][0] > cricketScores[i][1]){
            printf("Highest Score = %d\n", cricketScores[i][0]);
        }
        else{
            printf("Highest Score = %d\n", cricketScores[i][1]);
        }
    }
    return 0;
}