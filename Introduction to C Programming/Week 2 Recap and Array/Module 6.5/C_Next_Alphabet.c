#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if (ch == 'z') {
        printf("a\n");
    } else {
        char c = ch + 1;
        printf("%c\n", c);
    }
    return 0;
}