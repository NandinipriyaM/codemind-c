#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int count = 0;
    int isSpace = 1; // 1 indicates the previous character is a space or newline

    for (int i = 0; str[i] != NULL; i++) {
        if (str[i] == ' ' || str[i] == '
') {
            isSpace = 1;
        } else {
            if (isSpace) {
                count++;
                isSpace = 0;
            }
        }
    }

    return count;
}

int main() {
    char inputString[1000];

    fgets(inputString, sizeof(inputString), stdin);

    inputString[strcspn(inputString, "
")] = NULL;

    int result = countWords(inputString);
    printf("%d
", result);

    return 0;
}
