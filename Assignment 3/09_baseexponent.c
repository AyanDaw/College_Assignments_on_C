#include<stdio.h>
#include<conio.h>
int main() {
    int n, p, i, m=1;
    printf("Please enter the base");
    scanf("%d", &n);
    printf("Please enter the amount of pow: ");
    scanf("%d", &p);
    printf("The value of %d^%d: ", n, p);
    for(i=1; i<=p; i++) {
        m = m * n;
    }
    printf("%d", m);
    return 0;
    getch();
}