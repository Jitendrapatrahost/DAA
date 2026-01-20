//EXP - 1
//Question 1
//Write a Program in c For Linear Search Using Function.
#include <stdio.h>
#define MAX_SIZE 100
int linear_search(int arr[], int size, int key);
int main() {
 int arr[MAX_SIZE];
 int size, key, position;

 printf("Enter the number of elements in the array: ");
 scanf("%d", &size);

 printf("Enter %d elements:\n", size);
 for (int i = 0; i < size; i++) {
 scanf("%d", &arr[i]);
 }

 printf("Enter the element to search: ");
 scanf("%d", &key);

 position = linear_search(arr, size, key);
 if (position != -1) {
 printf("Element %d found at position %d (0-based index).\n", key,
position);
 } else {
 printf("Element %d not found in the array.\n", key);
 }

 return 0;
}
// Function definition for linear search
int linear_search(int arr[], int size, int key) {
 for (int i = 0; i < size; i++) {
 if (arr[i] == key) {
 return i;
 }
 }
 return -1;
} 
