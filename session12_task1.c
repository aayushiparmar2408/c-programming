#include<stdio.h>
#include<string.h>
struct playlist{
    char title[40];
    char artist[40];
    int duration;
};
int main(){
    struct playlist p;

    strcpy(p.title, "apna bana le");
    strcpy(p.artist,"arijit singh");
    p.duration = 365;
    printf("%s\n",p.title);
    printf("%s\n",p.artist);
    printf("%d second\n",p. duration);
    
}