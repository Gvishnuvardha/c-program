#include <stdio.h>
int main() {
    int i, j, num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num - i; j++) {
            printf(" ");  
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            if (i == 1 || j == 1 || j == (2 * i - 1) || i == num) {
                printf("%d ", i);  
            } else {
                printf("  ");  
            }
        }
        printf("\n");  
    }

    return 0;
}
