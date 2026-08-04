#include <stdio.h>
float average(int amount[]){
    int i, sum = 0;
    for(i = 0; i < 7; i++){
        sum = sum + amount[i];
    }
    return sum / 7.0;
}
int main(){
    int amount[7] = {100, 200, 300, 400, 500, 600, 700};
    printf("Average = %.2f", average(amount));
    return 0;
