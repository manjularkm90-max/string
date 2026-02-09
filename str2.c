#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    if(str[0]>='A' && str[0]<='Z'){
        printf("valid");
    }
    else{
        printf("invalid");
    }
}