//Convert a given number of days into months and days.
#include<stdio.h>
#include<conio.h>
int main()
{
    int d, m;
    printf("Please enter the number of days:\n");
    scanf("%d", &d); //taking the number of days
    m= d/30;
    d= d%30;
    printf("The number of months are %d and the number of days are %d\n", m, d);
    return 0;
    getch();
}