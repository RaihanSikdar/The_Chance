/*
7. Write a C program to check whether a triangle is Equilateral, Isosceles, or Scalene.
50 50 60
Output_1:
This is an isosceles triangle.
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a==b && b==c)
            puts("This is an equilateral triangle.");

        else if(a==b || a==c || b==c)
              puts("This is an isosceles triangle.");

        else puts("This is a scalene triangle.");
    }
    return 0;
}
