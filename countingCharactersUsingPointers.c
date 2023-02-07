#include <stdio.h>

int string_length(const char* str) {
    const char* end = str;
    while (*end) {
        end++;
    }
    return end - str;
}

int main() {
    const char* test_string = "gay peoplee!";
    int length = string_length(test_string);
    printf("The length of the string is: %d\n", length);
    return 0;
}
