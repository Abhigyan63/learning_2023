#include <stdio.h>

int find_biggest_number(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int result = find_biggest_number(10, 5);
    printf("The biggest number is: %d\n", result);
    return 0;
}