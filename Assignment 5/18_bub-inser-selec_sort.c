#include <stdio.h>
#include <conio.h>
int main(){
    int i, j, c, temp, min, A[10], Bub[10], Ins[10], Sel[10];
    printf("Please enter 10 no.s: ");
    for (i=0; i<10; i++)
        scanf("%d", &A[i]);

    printf("Bubble sort\n");
    for(i=0; i<10; i++)
        Bub[i]=A[i];

    printf("\nThe array is: ");
    for (i=0; i<10; i++){
        printf("| %d", Bub[i]);
        if (i==9)
            printf("|\n\n");
    }

    for (i=0; i<9; i++){
        for(j=0; j<(9-i); j++){
            if(Bub[j]>Bub[j + 1]){
                temp = Bub[j];
                Bub[j] = Bub[j + 1];
                Bub[j + 1] = temp;
            }
        }
    }
    printf("\nThe sorted array is: ");
    for (i=0; i<10; i++){
        printf("| %d", Bub[i]);
        if (i==9)
            printf("|");
    }
//insertion sort
    printf("\nInsertion sort\n"); //Ba diker jon boro hole swap kore jabe.

    for (i=0; i<10; i++)
        Ins[i]=A[i];

    //Algorithm code
    for(i=1; i<10; i++){
        temp=Ins[i];
        j=i-1;
        while(j>=0 && Ins[j]>temp){
            Ins[j+1]=Ins[j];
            j=j-1;
        }
        j=j+1;
        Ins[j]=temp;
    }

    printf("\nThe sorted array is: ");
    for (i=0; i<10; i++){
        printf("| %d", Ins[i]);
        if (i==9)
            printf("|");
    }

//Selection sort
    printf("\nSelection sort\n");

    for (i=0; i<10; i++){
        Sel[i]=A[i]; //getting the elements
    }
    //Algorithm code
    for(i=0;i<10;i++){
        min=Sel[i];
        temp=Sel[i];
        for(j=i; j<10; j++){
            if(min>=Sel[j]){
                min=Sel[j];
                c=j;
            }
        }
        Sel[i]=min;
        Sel[c]=temp;
    }
    printf("\nThe sorted array is: ");
    for (i=0; i<10; i++){
        printf("| %d", Sel[i]);
        if (i==9)
            printf("|");
    }
    return 0;
    getch();
}
