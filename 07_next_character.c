#include <stdio.h>

int main() {
    char ch, next;
    printf("Enter a character: ");
    scanf("%c", &ch);
    next = ch + 1;
    printf("Next character = %c\n", next);
    return 0;
}
