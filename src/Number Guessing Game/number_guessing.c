#include <stdio.h>
#include <stdlib.h>     /* For random number generation */
#include <time.h>       /* For seeding the random number generator */

int main(void)
{
    srand(time(NULL)); /* Seed the random number generator with the current time */
    
    printf("Number Guessing Game\n\n");

    return 0;
}