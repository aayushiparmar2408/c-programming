#include<stdio.h>
int  main(){
    FILE *fp;
    fp=fopen("playlist.txt","w");
    fprintf(fp, "apna bana le\n");
    fprintf(fp,"dhun\n");
    fprintf(fp,"lag ja gale\n");
    fclose(fp);
    printf("songs written successfully");
}