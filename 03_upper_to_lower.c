#include <stdio.h>

int main() {
    char upper, lower;
    printf("Enter an uppercase character: ");
    scanf("%c", &upper);
    lower = upper + 32;
    printf("Lowercase = %c\n", lower);
    return 0;
}
