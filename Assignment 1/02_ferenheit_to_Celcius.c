//Convert a temperature from Fahrenheit scale to Celsius scale
#include<stdio.h>
#include<conio.h>
int main()
    {
    float f,c;
    printf("Please enter the temperature in Fahrenheit scale:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("The temperature in Fahrenheit scale is %f \n The temperature in Celsius scale is %f\n",f,c);
    return 0;
    getch();
    }