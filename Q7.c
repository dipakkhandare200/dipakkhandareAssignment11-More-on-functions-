//7. Write a function to print first N terms of Fibonacci series (TSRN)
 #include<stdio.h>
    int fabonacci(int);
    int main()
    {
     int number;
     printf("Enter the number of elements:");
     scanf("%d",&number);
      fabonacci(number);
      }
       int fabonacci(int num)
    {
       int n1=0,n2=1,n3,i;
      for(i=2;i<num;++i)
     {
      n3=n1+n2;
      n1=n2;
      n2=n3;
     }      printf(" %d",n3);

      return 0;
     }



