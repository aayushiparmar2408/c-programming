#include <stdio.h>
// function to check whether a number is even
int isEven(int num){
    // check if the number is divisible by 2
    if (num % 2 == 0){
        // Return 1 true if the number is even
        return 1;
    }
    else{
        // return 0 false if the number is odd
        return 0;
    }
}
int main(){
    int num = 10;
    // call the function and check the result
    if (isEven(num)){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
}