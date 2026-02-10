//consonant counter
#include <stdio.h>
int main() {
    char str[50];
    int i = 0;
    int count = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            if ((str[i] != 'A' || str[i] != 'E' || str[i] != 'I' ||str[i] != 'O' || str[i] != 'U' ||str[i] != 'a' || str[i] != 'e' || str[i] != 'i' ||str[i] != 'o' || str[i] != 'u'))
            {
                count++;
            }
        }i++;
    }printf("%d", count);
}
