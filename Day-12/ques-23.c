#include<stdio.h>
int main()
{
    int daysLate;
    int fine;

    printf("Enter the number of days late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 0)
    {
        printf("No fine");
    }
    else if (daysLate <= 5)
    {
        fine = daysLate * 2;
        printf("Fine = Rs. %d", fine);
    }
    else if (daysLate <= 10)
    {
        fine = (5 * 2) + ((daysLate - 5) * 4);
        printf("Fine = Rs. %d", fine);
    }
 
    else if (daysLate <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((daysLate - 10) * 6);
        printf("Fine = Rs. %d", fine);
    }
    else 
    {
        printf("Membership cancelled");
    }

    return 0;
}