//write a code to solve quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a, b, c;
float x1, x2;
printf("A Quadratic Equation looks like: ax^2 + bx + c = 0\n");
printf("Please enter the values of a, b, & c\n");
printf("a=");
scanf("%d", &a);
printf("b=");
scanf("%d", &b);
printf("c=");
scanf("%d", &c);
if(a==b)
printf("There is no solution");
if(((b*b)-4*a*c)<0)
printf("There is no real roots");
if(((b*b)-4*a*c)>=0)
{
    if(a==0)
    {
        printf("There is only one root\n");
        x1=-c/b;
        printf("%f",x1);
    }
    else
    {
        x1=((-b+(sqrt((b*b)-4*a*c)))/2*a);
        x2=((-b-(sqrt((b*b)-4*a*c)))/2*a);
        if(x1==x2)
        {
            printf("There is only one root(repeat)\n");
            printf("%f",x1);
        }
        else
        {
        printf("There are real roots\n");
        printf("The Roots are %f and %f...",x1,x2);
        }
    }
}
return 0;
getch();
}