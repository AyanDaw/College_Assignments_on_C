#include <stdio.h>

int main() {
    char str1[10], str2[10];
    int i = 0;

    printf("Enter a string: ");
    gets(str1);

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    printf("Copied string: %s\n", str2);
    return 0;
}
