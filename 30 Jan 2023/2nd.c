#include <stdio.h>
#include <string.h>

void capitalize(char str[]) {
    int len = strlen(str);
    if (len > 0) {
        if ('a' <= str[0] && str[0] <= 'z') {
            str[0] = str[0] - 'a' + 'A';
        }
        if ('a' <= str[len-1] && str[len-1] <= 'z') {
            str[len-1] = str[len-1] - 'a' + 'A';
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter the string:\n");
    gets(str);
    
    capitalize(str);
    printf("%s\n", str);
    return 0;
}

