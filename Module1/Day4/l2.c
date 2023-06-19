#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    int i;

    // Initialize min and max with the first element of the array
    *min = *max = arr[0];

    // Iterate through the array to find min and max values
    for (i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[100], size, i;
    int min, max;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, size, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
