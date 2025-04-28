//Swap two numbers without using third variable
#include<stdio.h>
#include<conio.h>
int main()
    {
    int a,b;
    printf("Please enter two numbers which you want to swap:\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("Before swapping a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d and b=%d\n",a,b);
    return 0;
    getch();
    }