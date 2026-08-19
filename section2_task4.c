#include <stdio.h>
struct Expense
{
    char category[30];
    float amount;
};
int main()
{
    struct Expense e[10];
    int choice, count = 0, i;
    float total;
    do
    {
        printf("\n1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Category: ");
            scanf("%s", e[count].category);
            printf("Amount: ");
            scanf("%f", &e[count].amount);
            count++;
        }
        else if (choice == 2)
        {
            total = 0;
            for (i = 0; i < count; i++)
            {
                printf("%s = %.2f\n",
                       e[i].category, e[i].amount);

                total = total + e[i].amount;
            }
            printf("Total = %.2f\n", total);
        }
        else if (choice == 3)
        {
            FILE *fp = fopen("expenses.txt", "w");
            for (i = 0; i < count; i++)
            {
                fprintf(fp, "%s,%.2f\n",
                        e[i].category, e[i].amount);
            }
            fclose(fp);
            printf("Saved successfully!");
        }
    } while (choice != 3);
    return 0;
}