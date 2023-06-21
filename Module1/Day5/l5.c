#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point *p1, struct Point *p2) {
    int temp;

    // Swap x coordinates
    temp = p1->x;
    p1->x = p2->x;
    p2->x = temp;

    // Swap y coordinates
    temp = p1->y;
    p1->y = p2->y;
    p2->y = temp;
}

int main() {
    struct Point point1, point2;

    // Read coordinates for point 1
    printf("Enter x and y coordinates for point 1: ");
    scanf("%d %d", &point1.x, &point1.y);

    // Read coordinates for point 2
    printf("Enter x and y coordinates for point 2: ");
    scanf("%d %d", &point2.x, &point2.y);

    // Before swapping
    printf("\nBefore swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields of the two structures
    swapPoints(&point1, &point2);

    // After swapping
    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
