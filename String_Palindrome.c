#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf(" %[^
]", str);

    int isPalindrome = 1;
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        while (!isalnum(str[i]) && i < j) {
            i++;
        }
        while (!isalnum(str[j]) && i < j) {
            j--;
        }

        // Compare characters (case-insensitive)
        if (tolower(str[i]) != tolower(str[j])) {
            isPalindrome = 0;
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("Palindrome
");
    } else {
        printf("Not Palindrome
");
    }

    return 0;
}

