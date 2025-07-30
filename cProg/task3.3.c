#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(4, 5);
    printf("Product: %d\n", result);
    return 0;
}
