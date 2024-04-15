#include <stdio.h>
#include <stdbool.h>
#include "solution.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error %s takes exactly one argument!\n",argv[0]);   //as the print says this handles cases where more or less than one argument is 
        return -1;                                                  //parsed to the program
    }

    int argument;
    sscanf(argv[1], "%i", &argument);

    exercise1_a(argument);

    return 0;
}