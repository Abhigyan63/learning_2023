#include <stdio.h>

void findSmallestLargestDigits(int n) {
    int i, j, num, digit, smallest, largest;

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num < 0) {
            printf("Not Valid\n");
            continue;
        }

        smallest = num % 10;
        largest = num % 10;
        num /= 10;

        while (num > 0) {
            digit = num % 10;

            if (digit < smallest)
                smallest = digit;

            if (digit > largest)
                largest = digit;

            num /= 10;
        }

        printf("Smallest digit of number %d: %d\n", i, smallest);
        printf("Largest digit of number %d: %d\n", i, largest);
    }
}

int main() {
    int n;

    printf("Enter the total number of values: ");
    scanf("%d", &n);

    findSmallestLargestDigits(n);

    return 0;
}
