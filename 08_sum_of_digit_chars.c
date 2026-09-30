#include <stdio.h>

int main() {
    char c1, c2;
    int sum;
    printf("Enter first digit: ");
    scanf("%c", &c1);
    printf("Enter second digit: ");
    scanf(" %c", &c2);
    sum = (c1 - 48) + (c2 - 48);
    printf("Sum = %d\n", sum);
    return 0;
}
