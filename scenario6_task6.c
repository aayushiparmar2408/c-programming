#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);
    p = str;
    if (*p == '\n' || *p == '\0')
    {
        printf("Input is empty.\n");
        return 0;
    }
    printf("You entered: ");
    while (*p != '\0' && *p != '\n')
    {
        printf("%c", *p);
        p++;
    }
    return 0;
}