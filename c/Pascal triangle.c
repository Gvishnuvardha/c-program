#include <stdio.h>	
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        int number = 1; 
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1); 
        }
        printf("\n"); 
    }
    return 0;
}
