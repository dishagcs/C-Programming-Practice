#include <stdio.h>

int main() {
    int n, r;

    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    r = n % 10;
    printf("%d", r);
    n = n / 10;

    r = n % 10;
    printf("%d", r);
    n = n / 10;

    r = n % 10;
    printf("%d", r);
    n = n / 10;

    r = n % 10;
    printf("%d", r);
    n = n / 10;

    return 0;
}
