#include<stdio.h>
#include<conio.h>
int main(){
    int i, j, A[4][4];
    printf("Please enter the elements of the matrix: \n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("for place %d%d: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nThe original matrix is:\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nThe transpose matrix is:\n");
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("%d\t", A[j][i]);
        }
        printf("\n");
    }
    return 0;
    getch();
}