#include <stdio.h>
struct FoodItem{
    char itemName[50];
    float price;
    float rating;
};
int main(){
    struct FoodItem menu[3]={
        {"momos", 349.0, 4.5},
        {"noodles", 199.0, 4.2},
        {"sandwich", 129.0, 4.1}
    };
    int i;
    for(i = 0; i < 3; i++){
        printf("Food Item %d\n", i+1);
        printf("Item Name : %s\n", menu[i].itemName);
        printf("Price     : %.2f\n", menu[i].price);
        printf("Rating    : %.1f\n\n", menu[i].rating);
    }
}