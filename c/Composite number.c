#include <stdio.h>
int main() {
    int num, i, factors = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            factors++;
        }
    }
    if (factors > 2) {
        printf("%d is a composite number.\n", num);
    } else {
        printf("%d is not a composite number.\n", num);
    }

    return 0;
}
