#include<stdio.h>
#include<conio.h>

int main() {
    // 1st method to find HCF
    int i, m, n, x = 1, min = 0, max = 0;
    printf("Please enter two integers: \n");
    scanf("%d %d", &m, &n);

    // Method 1
    printf("Method 1:\n");
    if (m > n)
        min = n;
    else
        min = m;

    for (i = 1; i <= min; i++) {
        if (m % i == 0 && n % i == 0) {
            if (max < i)
                max = i;
        }
    }

    printf("%d is the HCF of %d & %d\n", max, m, n);

    // Method 2
    printf("Method 2:\n");
    if (m > n)
        min = n;
    else
        min = m;

    for (i = 1; i <= min; i++) {
        if (m % i == 0 && n % i == 0) {
            x *= i;
        }
    }
    printf("%d is the HCF of %d & %d\n", max, m, n);
    return 0;
    getch();
}
