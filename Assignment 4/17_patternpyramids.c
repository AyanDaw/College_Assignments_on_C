#include<stdio.h>
#include<conio.h>
int main(){
    int i, j, c;

    //1st pyramid
    for(i=1; i<=3; i++){
        // for lines
        for(j=(3-i);j>=1;j--){
            //for spaces
            printf(" ");
        }
        c=i;
        for(j=1;j<=i;j++){
            // leftside 123 pyramid
            printf("%d", c++);
        }
        if(i!=1){
            for(j=2;j<=i;j++){
                // right side 243 pyramid
                c=2*i-j;
                printf("%d",c);
            }
        }
        printf("\n\n");    
    }

    printf("\n\n\n");//2nd pyramid
    for(i=1; i<=4; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n\n");//3rd pyramid
    for(i=1; i<=4; i++){
        for(j=(4-i); j>=1; j--){ //spaces
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n\n");//4th pyramid
    for(i=97; i<=100; i++){
        for(j=97; j<=i; j++){
            printf("%c", j);
        }
        printf("\n");
    }

    printf("\n\n\n");//5th pyramid
    for(i=97; i<=100; i++){
        for(j=97; j<=i; j++){
            printf("%c", i);
        }
        printf("\n");
    }

    return 0;
    getch();
}