#include <stdio.h>
int main(){
    int likes = 300;
    int *ptrLikes = &likes;
    printf("Value of likes: %d\n", likes);
    printf("Address stored in ptrLikes: %p\n", (void *)ptrLikes);
}