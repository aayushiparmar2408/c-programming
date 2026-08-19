#include <stdio.h>
int main()
{
    int minutes[7] = {0};
    int choice;
    int i;
    int total;
    int highest;
    float average;
    char confirm;
    do
    {
        printf("\n===== music listening logger =====\n");
        printf("1. log listening minutes\n");
        printf("2. view weekly report\n");
        printf("3. reset weekly data\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        // 1. log listening minutes
        if(choice == 1)
        {
            for(i = 0; i < 7; i++)
            {
                printf("enter minutes for Day %d: ", i + 1);
                scanf("%d", &minutes[i]);
            }
            // Save data to file
            FILE *file = fopen("music_log.txt", "w");
            if(file == NULL)
            {
                printf("file could not be opened.\n");
            }
            else
            {
                for(i = 0; i < 7; i++)
                {
                    fprintf(file, "%d\n", minutes[i]);
                }
                fclose(file);
                printf("music lstening data saved successfully!\n");
            }
        }

        // 2. view weekly report
        else if(choice == 2)
        {
            FILE *file = fopen("music_log.txt", "r");

            if(file == NULL)
            {
                printf("no music data found.\n");
            }
            else
            {
                total = 0;
                highest = 0;
                //read data from file
                for(i = 0; i < 7; i++)
                {
                    fscanf(file, "%d", &minutes[i]);
                    total = total + minutes[i];
                    if(minutes[i] > highest)
                    {
                        highest = minutes[i];
                    }
                }
                fclose(file);
                average = total / 7.0;
                printf("\n===== weekly report =====\n");
                for(i = 0; i < 7; i++)
                {
                    printf("day %d: %d minutes\n",
                           i + 1, minutes[i]);
                }
                printf("\ntotal listening: %d minutes\n", total);
                printf("average listening: %.2f minutes\n", average);
                printf("highest listening: %d minutes\n", highest);
            }
        }
        // 3. Reset Weekly Data
        else if(choice == 3)
        {
            printf("are you sure you want to reset data? (Y/N): ");
            scanf(" %c", &confirm);
            if(confirm == 'Y' || confirm == 'y')
            {
                // Clear array
                for(i = 0; i < 7; i++)
                {
                    minutes[i] = 0;
                // Clear file
                FILE *file = fopen("music_log.txt", "w");
                if(file != NULL)
                {
                    fclose(file);
                }
                printf("weekly data has been reset.\n");
            }
            else
            {
                printf("reset cancelled.\n");
            }
        }
        // 4. Exit
        else if(choice == 4)
        {
            printf("thank you for using music listening logger!\n");
        }
        else
        {
            printf("invalid choice. please try again.\n");
        }
    } while(choice!=4);
    return 0;
}