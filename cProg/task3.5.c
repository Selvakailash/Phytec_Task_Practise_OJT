#include <stdio.h>

int square(int x) {
    return x * x;
}

void display(int value) {
    printf("Value: %d\n", value);
}

int main() {
    int num = 6;
    int squared = square(num);
    display(squared);
    return 0;
}
