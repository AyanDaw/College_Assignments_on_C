#include <stdio.h>

int nfact(int n){
    int i,fact = 1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int recfact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else
        return n * recfact(n-1);
}
int main(){
    int a;
    printf("Please enter a number: ");
    scanf("%d", &a);
    if(a<0){
        printf("Dont enter any negative number\n");
    }
    else{
        printf("a. The factorial(non-recursion) of %d is: %d\n", a, nfact(a));
        printf("b. The factorial(recursion) of %d is: %d\n", a, recfact(a));
    }
}