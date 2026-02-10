// Special Character Counter in Passwords
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    int count = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||(str[i] >= 'a' && str[i] <= 'z') ||(str[i] >= '0' && str[i] <= '9'))) {
            if (str[i] != '\n')
                count++;
        }i++;
    }
    printf("%d", count);
}

