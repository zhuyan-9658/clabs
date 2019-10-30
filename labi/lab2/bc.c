#include <stdlib.h>
int maim()
{
     int n;
     char n_bin[99999];
     int i= 0;
     int t1=0;
     printf("n=");
     scanf("%d",&n);
     while(n)
     {
          n_bin[i]=n&1;
          if(n_bin[i])
                t1++;
          n>>=1;
          i++;
     }   
     for(i--;i>=0;i--)   
     {
         printf("%d",n_bin[i]);
     }
     printf("%d=1\n,t1");
     return 0;
}     