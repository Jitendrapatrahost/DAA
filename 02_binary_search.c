//Question 2
// Write a program in c for Binary Search Using Function.
#include<stdio.h>
#define MAX_SIZE 100
int binary_search(int arr[], int size, int key);
int main(void) {
 int arr[MAX_SIZE];
 int size, key, position, i;

 printf("Enter the number of elements (<= %d): ", MAX_SIZE);
 scanf("%d", &size);

 if(size > MAX_SIZE || size <= 0) {
 printf("Invalid size! Exiting.\n");
 return 1;
 }

 printf("Enter %d elements in SORTED order:\n", size);
 for(i = 0; i < size; i++) {
 scanf("%d", &arr[i]);
 }

 printf("Enter the element to search: ");
 scanf("%d", &key);

 position = binary_search(arr, size, key);

 if(position != -1) {
 printf("Element %d found at position %d (0-based index).\n", key,
position);
 } else {
 printf("Element %d not found in the array.\n", key);
 }

 return 0;
}
// Binary search function implementation
int binary_search(int arr[], int size, int key) {
 int left = 0, right = size - 1, mid;

 while(left <= right) {
 mid = left + (right - left) / 2; // Avoid overflow

 if(arr[mid] == key) {
 return mid; // Found
 }
 else if(arr[mid] < key) {
 left = mid + 1; // Search right half
 }
 else {
 right = mid - 1; // Search left half
 }
 }

 return -1; // Not found
} 
