#include<stdio.h>

#define max(x,y) (x>y)? x:y

int main(){
    int a,b;
    printf("Please enter 2 no.s: ");
    scanf("%d %d", &a, &b);
    printf("The bigger one is: %d", max(a,b));
}