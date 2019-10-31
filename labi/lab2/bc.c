#include <stdio.h>
#inchude <stdlib.h>

int maim(void)
{
     int n;
     int m=0:
     int c=[100];
     int count=0;
     printf("enter a four-digit positive int:\n");
     scanf("%d",&n);
     printf("binary system");
     while(n)
     {
          c[m]=n%2;
          m++;
          n/=2;
          
        
     }   
     for(int j=m-1;j>=0;j--)   
     {
         printf("%d",c[j]);
         if(c[j]==1){
            count++;
         }
     }
     printf("\n\"1\"the numder of occurrences =%d\n",count);
     system("pause");
     return 0;
}     