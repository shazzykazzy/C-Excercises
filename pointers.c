#include <stdio.h>

int main() {
    int x = 20;
    int *ptr = &x;
    printf("Address of pointer: %p\n", (void*) &ptr);
    printf("Value of pointer: %p\n", (void*) ptr);
    printf("Value of what the pointer is pointing to: %d\n", *ptr);
    printf("Idk what this is %p\n", &x )cc;
    return 0;
}
