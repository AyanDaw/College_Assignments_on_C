#include <stdio.h>
#include <ctype.h> // For isspace()

int main(){
    int ch = 0, sps = 0, words = 0;
    char c, prev = '\0';
    FILE *fp;
    char input[1000]; // Buffer to store user input

    fp = fopen("Textfile.txt", "w+");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter your text (Press 'Enter' and then 'Ctrl+Z' (Windows) or 'Ctrl+D' (Linux/Mac) to stop):\n");
    while ((fgets(input, sizeof(input), stdin)) != NULL) { // Read input until EOF
        fprintf(fp, "%s", input); // Write each line to the file
    }
    
    rewind(fp);
    while ((fscanf(fp, "%c", &c)) != EOF) {
        if (isspace(c)) {
            if(c == ' ' || c == '\t')
                sps++;
            if (prev != '\0' && !isspace(prev)) { // Count a word when transitioning from non-space to space
                words++;
            }
        } else if (c != '\n' || c != EOF) {
            ch++;
        }
        prev = c;
    }
    if (prev != '\0' && !isspace(prev)) { // Count the last word if the file doesn't end with a space
        words++;
    }

    printf("The details are: \nNumber of characters:\t%d\nNumber of <spaces>:\t%d\nNumber of words:\t%d\n", ch, sps, words);
    fclose(fp);
    return 0;
}