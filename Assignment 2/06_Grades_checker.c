#include<stdio.h>
#include<conio.h>
int main()
{
int marks=0;
printf("To check your grades,\nPlease enter your marks here: ");
scanf("%d", &marks);
printf("Your grade is: ");
switch(marks/10)
{
    case 10:
    case 9:
    printf("O");
    break;
    case 8:
    printf("E");
    break;
    case 7:
    printf("A");
    break;
    case 6:
    printf("B");
    break;
    case 5:
    printf("C");
    break;
    case 4:
    printf("D");
    break;
    default:
    printf("F");
    break;    
}
return 0;
getch();
}