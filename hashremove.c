#include <stdio.h>

int main() {
    char c;
    while (scanf("%c", &c) != EOF) {
        if (c != '#') {
            printf("%c", c);
        } else {
            printf("\n");
        }
    }
    return 0;
}
