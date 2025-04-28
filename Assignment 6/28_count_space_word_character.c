#include <stdio.h>
#include<string.h>

int main() {
    char str[200];
    int i = 0, spaces = 0, words = 0, chars = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else
            chars++;

        i++;
    }

    if (i > 0)
        words = spaces + 1;

    printf("Characters: %d\n", chars);
    printf("Spaces: %d\n", spaces);
    printf("Words: %d\n", words);

    return 0;
}
