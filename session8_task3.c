#include <stdio.h>
void increaseFollowersByValue(int followers){
    followers = followers + 1000;
    printf("Followers Value = %d\n", followers);
}
void increaseFollowersByReference(int *followers){
    *followers = *followers + 1000;
    printf("Followers  Reference  = %d\n", *followers);
}
int main(){
    int followers = 7000;
    printf(" Followers = %d\n", followers);
    increaseFollowersByValue(followers);
    printf("After Value  = %d\n", followers);
    increaseFollowersByReference(&followers);
    printf("After Reference = %d\n", followers);
    return 0;
}