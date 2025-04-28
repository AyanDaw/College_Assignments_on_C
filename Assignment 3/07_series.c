#include<stdio.h>
#include<conio.h>

int main() {
    int i, n;
    float s = 0.0;

    printf("Please enter the no. of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        s += (1.0 / i);
    }

    printf("The sum of the series: 1 + 1/2 + ... + 1/%d is: %f", n, s);

    return 0;
    getch();
}
