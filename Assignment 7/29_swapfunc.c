#include<stdio.h>
//Global variables
int a,b;

void swap(){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    printf("Please enter two no. to swap: ");
    scanf("%d %d", &a, &b);
    swap();
    printf("After swapping: a=%d, b=%d", a, b);
    return 0;
}
