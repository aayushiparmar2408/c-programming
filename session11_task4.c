#include <stdio.h>
void incrementfollowers(int *followers, int n){
    for(int i=0;i<n;i++){
        *followers = *followers +100;
         followers++;
    }
}
int main(){
    int followers[5] = {400,600,1400,560,3000};
    incrementfollowers(followers, 5);
    for(int i=0;i<5;i++){
        printf("Friend %d followers: %d\n", i+1, followers[i]);
    }
}