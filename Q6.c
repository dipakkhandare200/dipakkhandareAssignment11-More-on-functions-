//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
int twoprime(int,int );
int  main( )
{
int  beg, end, f, temp, i, j ;
printf(" Enter the Begining Number : ");
scanf("%d",& beg);
printf(" \n Enter the last Number : ");
scanf("%d",&end);
twoprime(beg,end );
}
int twoprime(x,y)
{
    int i,j,flag;
  while (x < y) {
      flag = 0;
      if (x <= 1) {
         ++x;
         continue;
      }
      for (i = 2; i <= x/ 2; ++i)
        {

         if (x % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d \n",x);
      ++x;
   }

   return 0;
}
