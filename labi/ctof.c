#include <stdio.h>

int main()
{
    int fahr,celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;
    celsius = lower;
    printf("celsius fahr\n");
    printf("\n");
    while (celsius <=upper) {;
        fahr = (celsius*1.8)+32;
        printf ("%d\t%d\n",fahr,celsius);
        celsius=celsius+step;
    }
}        
    