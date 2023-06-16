#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;

    for (int i = 0; i < 4; i++) {
        int divisor = 1;

        // Remove the current digit from the number
        for (int j = 0; j < i; j++)
            divisor *= 10;

        int remainingNum = (num / (divisor * 10)) * divisor + (num % divisor);

        if (remainingNum > largest)
            largest = remainingNum;
    }

    return largest;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);
    printf("The largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
