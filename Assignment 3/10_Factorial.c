#include<stdio.h>
#include<conio.h>
int main() {
    int i, f=1, n;
    printf("Please enter the number:");
    scanf("%d",&n);
    f=1;
    for(i=1; i<=n; i++) {
        f*=i;
    }
    printf("The factorial is: %d", f);
    return 0;
    getch();
}
