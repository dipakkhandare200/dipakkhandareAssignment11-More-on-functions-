//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
#include<conio.h>
void nprime(int );
int main()
{
  int n;
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&n);
   nprime(n );

}


void nprime(x )
  {
    int  i = 3, count, c;
   if ( x>= 1 )
   {
      printf("First %d prime numbers are :\n",x);
      printf("2\n");
   }

   for ( count = 2 ; count <= x;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
	 if ( i%c == 0 )
	    break;
      }
      if ( c == i )
      {
	 printf("%d\n",i);
	 count++;
      }
      i++;
   }

}

