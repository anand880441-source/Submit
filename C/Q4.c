// Q4

#include <stdio.h>

int main() {
    char str[] = "Hello";
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    int i = 0;
    int j = length - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    
    printf("Reversed: %s\n", str);
    return 0;
}