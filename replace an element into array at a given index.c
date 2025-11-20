#include <stdio.h>

int main() {
    // Declare an array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Specify the index to replace and new value (example)
    int index_to_replace = 2; // 0-based index
    int new_value = 10;

    if (index_to_replace < 0 || index_to_replace >= size) {
        printf("\nIndex out of range.\n");
        return 1;
    }

    // Replace the element
    arr[index_to_replace] = new_value;

    // Display the modified array
    printf("\nModified Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

