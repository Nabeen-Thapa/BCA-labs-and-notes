#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, digits, alphabets, signs,space;

    digits = alphabets = signs=space = i = 0;

    printf("Enter any string : ");
    gets(str);

    while (str[i] != '\0') {
        if (isdigit(str[i])) {
            digits++;
        }
        else if (isalpha(str[i])) {
            alphabets++;
        }
        else {
            signs++;
        }
        i++;
    }

    printf("\nDigits : %d\n", digits);
    printf("Alphabets : %d\n", alphabets);
    printf("Signs : %d\n", signs);

    return 0;
}

