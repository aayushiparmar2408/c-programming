#include <stdio.h>
void swapPlaylistCounts(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int playlist1 = 40;
    int playlist2 = 70;
    swapPlaylistCounts(&playlist1, &playlist2);
    printf("Playlist 1 songs: %d\n", playlist1);
    printf("Playlist 2 songs: %d\n", playlist2);
}