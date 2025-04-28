#include<stdio.h>
#include<conio.h>

int main() {
    int s = 0, r, n;
    printf("Please enter a integer no.");
    scanf("%d", &n);

    while (n != 0) {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }

    printf("%d", s);
    return 0;
    getch();
}