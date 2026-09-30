#include <stdio.h>

int main() {
    int total, th, h, t;

    printf("Enter amount: ");
    scanf("%d", &total);

    th = total / 500;
    total = total - 500 * th;

    h = total / 100;
    total = total - 100 * h;

    t = total / 10;
    total = total - 10 * t;

    printf("The no of 500 note is %d and no of 100 note is %d and no of 10 note is %d", th, h, t);
    return 0;
}
