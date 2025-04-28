#include <stdio.h>

int main() {
    char str[10];
    int i = 0;
    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0') {
        printf("The %dth element is: %c\n", i+1,str[i]);
        i++;
    }

    printf("Length of the string is: %d\n", i);
    return 0;
}
