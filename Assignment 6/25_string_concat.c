#include <stdio.h>
#include <string.h>
int main() {
    char str1[20], str2[20];
    int i = 0, j = 0;

    printf("Enter first string: ");
    gets(str1);
    
    printf("Enter second string: ");
    gets(str2);
    
    i = strlen(str1);

    // Ensure concatenation does not exceed buffer size
    while (str2[j] != '\0' && i < sizeof(str1) - 1) {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);
    return 0;
}
