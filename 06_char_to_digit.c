#include <stdio.h>

int main() {
    char ch;
    int digit;
    printf("Enter a digit character: ");
    scanf("%c", &ch);
    digit = ch - 48;
    printf("Digit = %d\n", digit);
    return 0;
}
