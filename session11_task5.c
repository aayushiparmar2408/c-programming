#include <stdio.h>
int main(){
    int likes = 100;
    int *ptrLikes = &likes;
    printf("Likes: %d\n", likes);
    printf("Address: %p\n", (void *)ptrLikes);
}