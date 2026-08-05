#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("playlist.txt","a");
    fprintf(fp,"ek pyar kya nagma hai\n");
    fprintf(fp,"tera bina\n");
    fclose(fp);
    printf("songs added successfully");
}