#include <stdio.h>
int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, j;
    printf("Enter number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }    printf("Enter number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
