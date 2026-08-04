#include <stdio.h>
#include <string.h>
int main(){
    char name[20];
    char username[20];
    printf("Enter Name: ");
    scanf("%s", name);
    strncpy(username, name, 5);
    username[5] = '\0';
    printf("Username = %s", username);
    return 0;
}