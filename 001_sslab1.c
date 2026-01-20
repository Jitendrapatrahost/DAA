#include <stdio.h>

int ss(int arr[], int n);

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements of array: ");
    scanf("%d", &n);

    printf("Enter the %d numbers to array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ss(arr, n);

    return 0;
}

int ss(int arr[], int n) {
    int i, j, pos, swap;

    for(i = 0; i < (n - 1); i++) {
        pos = i;

        for(j = i + 1; j < n; j++) {
            if(arr[pos] > arr[j]) {
                pos = j;
            }
        }

        if(pos != i) {
            swap = arr[i];
            arr[i] = arr[pos];
            arr[pos] = swap;
        }
    }

    printf("The sorted array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
