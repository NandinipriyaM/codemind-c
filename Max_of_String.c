#include <stdio.h>

int main() {
    char str[100];
    scanf("%99[^
]", str);

    char maxChar = str[0];

    int i = 1;
    while (str[i] != NULL) {
        if (str[i] > maxChar) {
            maxChar = str[i];
        }
        i++;
    }

    printf("%c
", maxChar);

    return 0;
}
