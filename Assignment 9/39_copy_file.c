#include<stdio.h>
#include<conio.h>

int main(){
    FILE *f1, *f2;
    char c;
    printf("Please enter your data here:\n");
    printf("[Press 'ctrl+z' (Windows) or 'ctrl+d' (Linux/Mac) to stop the input]\n");
    f1= fopen("Original.txt", "w");

    while((c=getchar()) != EOF){
        putc(c,f1);
    }

    fclose(f1);
    f1=fopen("Original.txt", "r");
    f2=fopen("Copy.txt", "w");
    while((c=getc(f1)) != EOF){
        putc(c, f2);
    }
    fclose(f1);
    fclose(f2);
    f1=fopen("Original.txt", "r");
    f2=fopen("Copy.txt", "r");
    printf("After copy...\n\n");
    printf("Contents of Original file:\n");
    while((c=getc(f1)) != EOF){
        printf("%c", c);
    }
    printf("Contents of Copy file:\n");
    while((c=getc(f2)) != EOF){
        printf("%c", c);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}