#include <stdio.h>

int main()
{
     int count=0;
     int m=0;
     int a=0;
     printf("please input the m\n");
     scanf("%d",&a);
     while(a !=0)
     {
          m=a%2;
          a=a/2;
          if(m ==1)
          count++;
         
     }
     printf("the amount is:%d\n",count);
     return 0;
}     