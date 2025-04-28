#include<stdio.h>
#include<conio.h>

int main() {
    int n, p, i = 0, j = 0, c = 0;
    printf("Please enter the limit: ");
    scanf("%d", &n);
    
    for(i = 0; i <= n; i++) {
        c = 0;
        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                c++;
            }
        }
        if(c == 2) {
            printf("%d, ", i);
        }
    }
    
    printf("Here are the Prime numbers");
    
    getch();
}
