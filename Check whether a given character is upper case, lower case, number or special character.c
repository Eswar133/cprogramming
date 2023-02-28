// Check whether a given character is upper case, lower case, number or special character write in c langauge 


#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (isupper(ch)) {
        printf("The character is uppercase.\n");
    }
    else if (islower(ch)) {
        printf("The character is lowercase.\n");
    }
    else if (isdigit(ch)) {
        printf("The character is a number.\n");
    }
    else {
        printf("The character is a special character.\n");
    }
    
    return 0;
}

