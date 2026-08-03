#include<stdio.h>
int main(){
    int meal;
    printf("1. breakfast\n");
    printf("2. lunch\n");
    printf("3. dinner\n");
    printf("4. snack\n");
    printf("enter your choice: ");
    scanf("%d",&meal);

    switch(meal){
        case 1:
        printf("idli");
        break;
        case 2:
        printf("sabji roti");
        break;
        case 3:
        printf("dal rice");
        case 4:
        printf("pani puri");
    }
    return 0;
}