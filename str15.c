//First Occurrence Search (Log Analyzer)
#include <stdio.h>
int main() {
    char str[50];
    char ch;
    int index = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            index = i;
            break;
        }
    }
    printf("%d", index);  
}
