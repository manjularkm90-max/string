//Word Counter in Text Editor
#include <stdio.h>
int main() {
    char str[50];
    int i = 0;
    int count= 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            count++;  
        }
        i++;
    }
    if (i != 0) {
        count= count + 1;
    }
    printf("%d",count);
}
