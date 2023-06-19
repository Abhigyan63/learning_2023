#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size, i, sum = 0;
    float average;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);

    // Read array elements from the user and calculate the sum
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate the average
    average = (float)sum / size;

    // Print the sum and average
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
