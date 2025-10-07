#include<stdio.h>

int main()
{
    int num , digit = 0 , firstdigit , lastdigit ;
  
    printf("\n enter number :");
    scanf("%d" ,&num);

    lastdigit = num % 10 ;

    while(num != 0)
    {
        firstdigit = num % 10 ;   
        num /= 10;
        digit++;
    }

    printf("\n total digit of the entered number is : %d" , digit);
    printf("\n addition is : %d " ,firstdigit + lastdigit);

    return 0;
}
