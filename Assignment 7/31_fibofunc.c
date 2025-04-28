#include <stdio.h>

void recfibo(int a, int b, int c, int n){
    if(n==0){
    printf(" end\n");
    return;
    }
    else{
        c=a+b;
        a=b;
        b=c;
        printf(" %d", c);
        recfibo(a,b,c,n-1);
    }
}
void fibonacci(int n){
    int i, f1=1, f2=1, f3;
    for(i=0; i<n; i++){
            f3= f1 + f2;
            f1 = f2;
            f2 = f3;
            printf(" %d", f3);
    }
}

int main(){
    int a;
    printf("Please enter the no. of terms: ");
    scanf("%d", &a);
    printf("a. The fibonacci series (nrecursion) upto %d terms is: 1 1", a);
    fibonacci(a-2);
    printf("\nb. The fibonacci series (recursion) upto %d terms is: 1 1", a);
    recfibo(1,1,0,a-2);
}