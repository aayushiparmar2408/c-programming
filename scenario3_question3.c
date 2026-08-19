#include <stdio.h>
int main()
{
    printf("Internship Application Form\n");
    printf("1. Applicant Name: text, required\n");
    printf("2. Email: email, required\n");
    printf("3. Phone Number: tel, required\n");
    printf("4. Preferred Domain: Web / Data / Mobile / AI, required\n");
    printf("5. Resume: file, required\n");
    printf("\nValidation:\n");
    printf("- required: Field cannot be empty.\n");
    printf("- email: Checks basic email format.\n");
    printf("- Server-side validation is also needed for production.\n");
    return 0;
}