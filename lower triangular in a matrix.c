#include <stdio.h>

int main() {
    int r, i, j;
    printf("Enter the number of rows/columns of square matrix: ");
    if (scanf("%d", &r) != 1 || r <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int a[r][r];
    printf("Enter the elements of matrix: \n");
    for (i = 0; i < r; i++)
        for (j = 0; j < r; j++)
            scanf("%d", &a[i][j]);

    int is_lower_triangular = 1;
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            /* Standard check: all elements above diagonal must be 0 */
            if (j > i && a[i][j] != 0) {
                is_lower_triangular = 0;
                break;
            }
        }
        if (!is_lower_triangular) break;
    }

    if (is_lower_triangular)
        printf("Given Matrix is a Lower Triangular Matrix\n");
    else
        printf("Given Matrix is NOT a Lower Triangular Matrix\n");

    return 0;
}

