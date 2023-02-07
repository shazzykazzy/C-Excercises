#include <stdio.h>

void pass_by_value(int x) {
    x = x + 1;
}

void pass_by_reference(int *x) {
    *x = *x + 1;
}

int main() {
    int a = 5;
    pass_by_value(a);
    printf("%d\n", a); // prints 5

    int b = 5;
    pass_by_reference(&b);
    printf("%d\n", b); // prints 6
}
