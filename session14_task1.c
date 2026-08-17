#include <stdio.h>
int main(){
    int prices[3] = {120, 250, 90};
    int total = 0;
    for(int i=0;i<3;i++){
        total+=prices[i];
    }
    printf("total price is: %d", total);
}