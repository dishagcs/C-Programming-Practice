#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 3;
    } else if (units <= 200) {
        bill = units * 5;
    } else {
        bill = units * 7;
    }

    printf("Electricity bill = %.2f\n", bill);
    return 0;
}
