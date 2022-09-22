//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(float);
int main()
{
    float r,Area;
    printf("Enter the radius of circle= \n");
    scanf("%f",&r);
    Area=area(r);
    printf("Area of the circle = %f",Area);
}
float area(float x)
{
    float A;
    A=3.14*x*x;
    return A;
}
