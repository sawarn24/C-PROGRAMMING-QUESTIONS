#include <stdio.h>

void to_upper(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

int main() {
    char str[] = "hello, world!";
    to_upper(str);
    printf("Uppercase: %s\n", str);
    return 0;
}
