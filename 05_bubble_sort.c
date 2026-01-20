#include <stdio.h>
#define MAX_SIZE 100

void bubble_sort(int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, size);

    printf("Array after Bubble Sort:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Function definition for Bubble Sort
void bubble_sort(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
