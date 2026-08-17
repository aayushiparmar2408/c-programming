#include <stdio.h>
// function to format the follower count
char* formatFollowersCount(int count){
    // array to store the formatted result
    static char result[20];

    // if followers are 1 million or more
    if (count >= 1000000){
        sprintf(result, "%.1fM", count / 1000000.0);
    }
    // if followers are 1000 or more
    else if (count >= 1000){
        sprintf(result, "%.1fK", count / 1000.0);
    }
    // if followers are below 1000
    else{
        sprintf(result, "%d", count);
    }
    // return the formatted result
    return result;
}
int main(){
    printf("%s\n", formatfollowersCount(1500));
    printf("%s\n", formatfollowersCount(1200000));
    printf("%s\n", formatfollowersCount(500));
    return 0;
}