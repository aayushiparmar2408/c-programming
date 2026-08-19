#include <stdio.h>
int main()
{
    float rain[30], sum = 0, average;
    int i;
    // Enter rainfall for 30 days
    for(i = 0; i < 30; i++)
    {
        printf("Enter rainfall for day %d: ", i + 1);
        scanf("%f", &rain[i]);
        sum = sum + rain[i];
    }
    // Calculate average
    average = sum / 30;
    printf("\nMonthly Average = %.2f\n", average);
    // Find above-average days
    printf("\nDays with above-average rainfall:\n");
    for(i = 0; i < 30; i++)
    {
        if(rain[i] > average)
        {
            printf("Day %d = %.2f\n", i + 1, rain[i]);
        }
    }
    return 0;
}