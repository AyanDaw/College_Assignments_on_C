#include <stdio.h>
#include<string.h>

int main() {
    char str[10];
    int i = 0, len = 0;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
