#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    if (percentage < 0)
    {
        printf("Invalid percentage! Enter between 0 and 100.\n");
        return 0;
    }
    if (percentage > 100)
    {
        printf("Invalid percentage! Enter between 0 and 100.\n");
        return 0;
    }
    if (percentage >= 90)
    {
        printf("Grade: A\n");
        printf("Excellent work! Keep it up.\n");
    }
    else if (percentage >= 75)
    {
        printf("Grade: B\n");
        printf("Good work! Keep pushing.\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade: C\n");
        printf("Good effort! Keep improving.\n");
    }
    else if (percentage >= 45)
    {
        printf("Grade: D\n");
        printf("Keep practicing and work harder.\n");
    }
    else
    {
        printf("Grade: F\n");
        printf("Don't give up! Keep working hard.\n");
    }
    return 0;
}