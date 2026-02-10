//palindrom
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len, num = 1;
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            num = 0;
            break;
        }
    }
    if (num == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
