//Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int nextprime(int);
int main()
{
   int n,Ans;
   printf("enter the num\n");
   scanf("%d",&n);
   Ans = nextprime( n);
   printf("next prime number is %d",Ans);
}
int nextprime(int x)
{
 int i,j,out;
 for(i=x+1;i<=10000000;i++)
   {

      int flag=0;

      for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }

      if(flag==0)
      {
         return i;
         break;
      }
   }



}
