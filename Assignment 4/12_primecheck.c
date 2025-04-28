#include<stdio.h>
#include<conio.h>

int main() {
    int n, c = 0, i;
    printf("Please enter a number to check prime or not:");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            c++;
        }
    }
    
    if(c == 2)
        printf("It's a prime no.");
    else
        printf("It's not a prime no.");
    
    return 0;
    getch();
}