#include <stdio.h>

int main() {
    int arr1[50][50], brr1[50][50], crr1[50][50];
    int i, j, n;

    printf("Addition of two Matrices :\n");
    printf("------------------------------\n");
    printf("Input the size of the square matrix: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 50) {
        printf("Invalid size (1-50 allowed).\n");
        return 1;
    }

    printf("Input elements in the first matrix :\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }

    printf("Input elements in the second matrix :\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &brr1[i][j]);
        }

    printf("\nThe First matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", arr1[i][j]);
        printf("\n");
    }

    printf("The Second matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", brr1[i][j]);
        printf("\n");
    }

    /* calculate the sum of the matrices */
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            crr1[i][j] = arr1[i][j] + brr1[i][j];

    printf("\nThe Addition of two matrix is :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", crr1[i][j]);
        printf("\n");
    }

    return 0;
}

