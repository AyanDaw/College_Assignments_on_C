#include<stdio.h>
#include<conio.h>
int main(){
    int i, j, A[5][5];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            A[i][j]=0;
            A[i][i]=1;
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    return 0;
    getch();
}