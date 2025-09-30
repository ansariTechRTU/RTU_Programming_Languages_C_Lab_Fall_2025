/*
 * Lab 3, Task 1
 * Abdullah Ansari , 231ADB054
 *
 * Implement array algorithms:
 *   - find minimum value
 *   - find maximum value
 *   - calculate sum
 *   - calculate average
 *
 * Rules:
 *   - Write separate functions for each operation.
 *   - Work with int arrays.
 *   - Average should return a float.
 *
 * Example:
 *   int arr[] = {1, 2, 3, 4, 5};
 *   min = array_min(arr, 5); // 1
 *   max = array_max(arr, 5); // 5
 *   sum = array_sum(arr, 5); // 15
 *   avg = array_avg(arr, 5); // 3.0
 */

#include <stdio.h>

// Function prototypes
int array_min(int arr[], int size);
int array_max(int arr[], int size);
int array_sum(int arr[], int size);
float array_avg(int arr[], int size);

int main(void) {
    int arr[] = {10, 20, 5, 30, 15};
    int size = 5;

    printf("Min: %d\n", array_min(arr, size));
    printf("Max: %d\n", array_max(arr, size));
    printf("Sum: %d\n", array_sum(arr, size));
    printf("Avg: %.2f\n", array_avg(arr, size));

    return 0;
}

// Implement functions below
int array_min(int arr[], int size) {
      int minimum = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}



int array_max(int arr[], int size) {
     int max= arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max= arr[i];
        }
    }
    return max;
}


int array_sum(int arr[], int size) {
  int sum = 0;
  for (int i=0; i<size; i++){
    sum = sum+arr[i];
  }
    return sum; 
}

float array_avg(int arr[], int size) {
    int sum = 0;
  for (int i=0; i<size; i++){
    sum = sum+arr[i];
  }
float avg = sum/ size;

    return avg; // placeholder
}
