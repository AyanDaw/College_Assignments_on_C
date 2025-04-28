#include<stdio.h>
#include<conio.h>

int main() {
    int s = 0, n;
    printf("Please enter a Five digit no.");
    scanf("%d", &n);
    
    while (n != 0) {
        s += (n % 10);
        n /= 10;
    }

    printf("%d", s);
    return 0;
    getch();
}
