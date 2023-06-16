#include <stdio.h>

void swap(void* a, void* b, size_t size) {
     char* p = a;
     char* q = b;
    
    for (size_t i = 0; i < size; i++) {
         char temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    swap(&a, &b, sizeof(int));
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
    float x = 3.14, y = 2.718;
    printf("Before swap: x = %.2f, y = %.2f\n", x, y);
    
    swap(&x, &y, sizeof(float));
    
    printf("After swap: x = %.2f, y = %.2f\n", x, y);
    
    return 0;
}
