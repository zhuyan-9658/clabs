#include <stdio.h>

main()
{
     printf("temperature")
     
    int celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    celsius = lower;
    while (celsius <=upper) {
        fahr = celsius*9/5+32;
        printf ("%d\t%d\n",fahr,celsius);
        celsius=celsius+step;
    }
}        
    