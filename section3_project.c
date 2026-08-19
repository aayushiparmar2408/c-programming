#include <stdio.h>
struct StudyLog
{
    char subject[40];
    float hours[7];
};
void report(struct StudyLog s[])
{
    int i, j;
    float total;
    for(i = 0; i < 3; i++)
    {
        total = 0;
        for(j = 0; j < 7; j++)
        {
            total = total + s[i].hours[j];
        }
        printf("\n%s", s[i].subject);
        printf("\nTotal = %.2f", total);
        printf("\nAverage = %.2f\n", total / 7);
        printf("Chart: ");
        for(j = 0; j < 7; j++)
        {
            int k;
            for(k = 0; k < (int)s[i].hours[j]; k++)
                printf("*");
        }
        printf("\n");
    }
}
int main()
{
    struct StudyLog s[3] = {
        {"C", {0,0,0,0,0,0,0}},
        {"C++", {0,0,0,0,0,0,0}},
        {"Python", {0,0,0,0,0,0,0}}
    };
    int choice, day, i;
    FILE *fp;
    do
    {
        printf("\n1. Log Hours\n");
        printf("2. Weekly Report\n");
        printf("3. Save & Exit\n");
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("Enter day (1-7): ");
            scanf("%d", &day);
            for(i = 0; i < 3; i++)
            {
                printf("%s hours: ", s[i].subject);
                scanf("%f", &s[i].hours[day-1]);
            }
        }
        else if(choice == 2)
        {
            report(s);
        }
        else if(choice == 3)
        {
            fp = fopen("productivity_log.txt", "w");
            for(i = 0; i < 3; i++)
            {
                fprintf(fp, "%s", s[i].subject);
                for(day = 0; day < 7; day++)
                    fprintf(fp, ",%.2f", s[i].hours[day]);
                fprintf(fp, "\n");
            }
            fclose(fp);
            printf("Saved!");
        }
    } while(choice != 3);
    return 0;
}