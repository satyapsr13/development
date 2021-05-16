#include <stdio.h>

int main()
{
    int income;
    float tax;
    printf("Enter your income:\n");
    scanf("%d", &income);
    if (income >= 250000 && income < 500000)
    {
        tax = ((5.0 / 100 )* ((income - 250000)));
        printf("Tax to be paid is: %f\n", tax);
    }
    if (income >= 500000 && income < 1000000)
    {
        tax = 20 / 100 * (income - 250000);
        printf("Tax to be paid is: %f\n", tax);
    }
    if (income >= 1000000)
    {
        tax = 30 / 100 * (income - 250000);
        printf("Tax to be paid is: %f\n", tax);
    }
    else
    {
        printf("No tax:");
    }
    return 0;
}