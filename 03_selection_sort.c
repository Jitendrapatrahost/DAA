#include <stdio.h>
#define MAX_SIZE 100

void selection_sort(int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, size);

    printf("Array after Selection Sort:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Function definition for Selection Sort
void selection_sort(int arr[], int size) {
    int i, j, min_index, temp;

    for (i = 0; i < size - 1; i++) {
        min_index = i;

        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
