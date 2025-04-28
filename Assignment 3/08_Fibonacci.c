#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
    int f1=1, s=0, f2=1, n, i;
    printf("Please enter the no. of terms for fibonacci series: ");
    scanf("%d", &n);
    
    if(n<=2) {
        printf("The first terms are: %d\n%d", f1, f2);
        exit(2);
    }
    else {
        printf("The series is: \n%d\n%d", f1, f2);
    }
    
    for(i=3; i<=n; i++) {
        s = f1 + f2;
        printf("\n%d", s);
        f1 = f2;
        f2 = s;
    }

    return 0;
    getch();
}
