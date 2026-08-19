#include <stdio.h>
int main()
{
    float hours[7];
    float total = 0, average;
    float highest;
    int i, j, highestDay = 1;
    for (i = 0; i < 7; i++)
    {
        do
        {
            printf("Enter study hours for Day %d: ", i + 1);
            scanf("%f", &hours[i]);
            if (hours[i] < 0)
            {
                printf("Invalid input! Enter between 0 and 24.\n");
            }
            if (hours[i] > 24)
            {
                printf("Invalid input! Enter between 0 and 24.\n");
            }
        } while (hours[i] < 0 || hours[i] > 24);
        total = total + hours[i];
    }
    average = total / 7;
    highest = hours[0];
    for (i = 1; i < 7; i++)
    {
        if (hours[i] > highest)
        {
            highest = hours[i];
            highestDay = i + 1;
        }
    }
    printf("\nWeekly Total = %.2f hours\n", total);
    printf("Daily Average = %.2f hours\n", average);
    printf("Highest Study Hours = Day %d (%.2f hours)\n",
           highestDay, highest);
    printf("\nStudy Hours Bar:\n");
    for (i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);
        for (j = 0; j < (int)hours[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}