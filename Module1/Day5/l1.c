#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateVolumeAndSurfaceArea(struct Box *ptrBox) {
    float volume, surfaceArea;

    volume = ptrBox->length * ptrBox->width * ptrBox->height;
    surfaceArea = 2 * (ptrBox->length * ptrBox->width + ptrBox->length * ptrBox->height + ptrBox->width * ptrBox->height);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
}

int main() {
    struct Box box;
    struct Box *ptrBox;

    ptrBox = &box;

    printf("Enter the length, width, and height of the box:\n");
    scanf("%f %f %f", &(ptrBox->length), &(ptrBox->width), &(ptrBox->height));

    calculateVolumeAndSurfaceArea(ptrBox);

    return 0;
}
