//Write a program in C to find the square of any number using the function.
#include<stdio.h>
int squre(int);
int main()
{
    int i;
    printf("Enter a number \n");
    scanf("%d",i);
    squre(i);
}
int squre(int k)
{
    int m;
    m=k*k;
    printf("squre of the number =%d",m);
return m;
}

