#include <stdio.h>
void exercise1_a( int n )
{
    int quotient, remainder;
    if ( n <= 2 )
    {
        printf("%d \n",n);
    }
    else
    {   
        quotient = n / 3;
        remainder = n % 3;
        if (remainder == 0)
        {
            for (int i=0; i<quotient;i++) printf("3 ");
        }
        if (remainder == 1)
        {
            for (int i=0; i<quotient-1;i++) printf("3 ");   // In this case we have to print qoutient-1 
            printf("4");                                    //the text books official is to append 2 2's but yielding a 4 gives the same result since 2 * 2 = 4
        }
        if (remainder == 2)
        {
            for (int i=0; i<quotient;i++) printf("3 ");
            printf("2 ");

        }
        printf("\n"); //handles the exit formatting
    }
    
}
