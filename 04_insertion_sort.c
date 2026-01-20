#include <stdio.h>
#define MAX_SIZE 100

void insertion_sort(int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    insertion_sort(arr, size);

    printf("Array after Insertion Sort:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Function definition for Insertion Sort
void insertion_sort(int arr[], int size) {
    int i, key, j;

    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
