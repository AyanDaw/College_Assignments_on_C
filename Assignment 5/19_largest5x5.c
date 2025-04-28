#include<stdio.h>
#include<conio.h>
int main(){
    int max, i, j, A[5][5];
    printf("Please enter the elements: \n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("for the place %d%d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    max=A[0][0];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d\t", A[i][j]);
            if(max<=A[i][j])
                max=A[i][j];
        }
        printf("\n");
    }
    printf("The maximum number is: %d", max);
    return 0;
    getch();
}