#include <stdio.h>
int main() {
    int followercount = 100;
    printf("initial followercount = %d\n", followercount);
    printf("using pre-increment (++followercount): %d\n", ++followercount);
    printf("value after pre-increment = %d\n", followercount);
    printf("using post-increment (followercount++): %d\n", followercount++);
    printf("value after post-increment = %d\n", followercount);
}