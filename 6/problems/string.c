#include<stdio.h>

int main(void) {
    
    int array[100];   
    char string[] = "adpoijdsapoijdwqsapoj";
    char *string1 = "Hello";
    
}


char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

char toUpper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    }
    return ch;
}



