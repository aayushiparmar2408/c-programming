#include <stdio.h>
int main(){
    //loop from 1 to 10
    for (int i=1;i<=10;i++){
     //% checks if the number is divisible by 2
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
}