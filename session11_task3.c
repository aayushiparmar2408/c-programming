#include <stdio.h>
int main(){
    int orders[5] = {340, 240, 230, 510, 350};
    int *ptr = orders;
    for(int i=0;i<5;i++){
        printf("Order amount: %d\n", *ptr);
        printf("Memory address: %p\n\n", (void *)ptr);
        ptr++;
    }
}