#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, i, sum = 0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Error: memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;
    printf("\nSum     = %d\nAverage = %.2f\n", sum, avg);

    free(arr);
    return 0;
}
