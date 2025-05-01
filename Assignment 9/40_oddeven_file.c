#include <stdio.h>

int main(){
    FILE *num, *o, *e;
    int n;

    // Open Numbers.txt for writing
    num = fopen("Numbers.txt", "w");
    printf("Please enter some integers here:\n");
    printf("[Press 'ctrl+z' (Windows) or 'ctrl+d' (Linux/Mac) to stop the input]\n");
    while(scanf("%d", &n) != EOF){
        fprintf(num, "%d\n", n); // Write the integer to the file
    }
    fclose(num); // Close the file after writing

    // Open files for reading and writing
    num = fopen("Numbers.txt", "r");    
    e = fopen("even.txt", "w");
    o = fopen("odd.txt", "w");
    // Separate numbers into even and odd files
    while(fscanf(num, "%d", &n) != EOF){
        if (n % 2 == 0)
            fprintf(e, "%d\n", n);
        else
            fprintf(o, "%d\n", n);
    }
    fclose(num);
    fclose(e);
    fclose(o);

    // Open files for reading
    num = fopen("Numbers.txt", "r");
    e = fopen("even.txt", "r");
    o = fopen("odd.txt", "r");
    // Display contents of the files
    printf("The contents of the files are: \n");
    printf("Numbers.txt : ");
    while(fscanf(num, "%d", &n) != EOF){
        printf("%d ", n);
    }
    printf("\n");
    printf("even.txt : ");
    while(fscanf(e, "%d", &n) != EOF){
        printf("%d ", n);
    }
    printf("\n");
    printf("odd.txt : ");
    while(fscanf(o, "%d", &n) != EOF){
        printf("%d ", n);
    }
    printf("\n");

    // Close all files
    fclose(num);
    fclose(e);
    fclose(o);

    return 0;
}