#include<stdio.h>
int main(){
    FILE *fp;
    char c;
    fp=fopen("playlist.txt","r");
    fprintf(fp,"apna bana le\n");
    fprintf(fp,"dhun\n");
    fprintf(fp,"lag ja gale\n");
    while((c=fgetc(fp)) !=EOF){
        printf("%c",c);
    }
    fclose(fp);
    
}