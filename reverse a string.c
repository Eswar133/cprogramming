/*Write a program to reverse a string.*/
#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main() {
    char str[] = "hello world";
    printf("Original string: %s\n", str);
    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

