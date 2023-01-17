#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int letters = 0, numbers = 0, special = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            numbers++;
        } else {
            special++;
        }
    }

    printf("Letters: %d\n", letters);
    printf("Numbers: %d\n", numbers);
    printf("Special Characters: %d\n", special);
    return 0;
}
