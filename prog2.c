#include<stdio.h>

int main()
{
    int num , digit = 0;

    printf("\n enter number :");
    scanf("%d" ,&num);

    while(num != 0)
    {
        printf(" %d ,", num); //  number of interaction .  
        num /= 10;
        digit++;
    }

    printf("\n total digit of the entered number is : %d" , digit);

    return 0;
}
