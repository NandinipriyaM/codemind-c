#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%99[^
]s", str);

    int length = strlen(str);
    
    
    for (int start = 0, end = length - 1; start < end; start++, end--) {
        
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }

    printf("%s
", str);


}