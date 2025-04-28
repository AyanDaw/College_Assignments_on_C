#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

int main(){
    int a, b, c;
    printf("Please enter 2 no.s: ");
    scanf("%d %d", &a, &b);
    c = hcf(a, b);
    printf("The HCF of %d & %d is: %d", a, b, c);
    return 0; // Added return statement
}