#include "stdio.h"
#include "stdlib.h"


void pass_by_value(int x) {
    x = x * x;
}

void pass_by_reference(int *x) {
    *x = *x *  *x;
}

int main() {
    int a = 5;
    pass_by_value(a);
    printf("%d\n", a); // prints 5

    int b = 5;
    pass_by_reference(&b);
    printf("%d\n", b); // prints 6
}
