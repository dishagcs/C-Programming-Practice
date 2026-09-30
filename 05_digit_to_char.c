#include <stdio.h>

int main() {
    int digit;
    char ch;
    printf("Enter a digit (0 to 9): ");
    scanf("%d", &digit);
    ch = digit + 48;
    printf("Digit character = %c\n", ch);
    return 0;
}
