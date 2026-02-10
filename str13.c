// Manual String Copy (Memory Backup Tool)
#include <stdio.h>
int main() {
    char str1[50];
    char str2[50];
    scanf("%s", str1);
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i]; 
    }
    str2[i] = '\0';
    printf("%s", str2);
}
