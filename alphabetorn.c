#include <stdio.h>

int main() {
    char ch = 'G';
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("Alphabet");
    else
        printf("Not Alphabet");
    return 0;
}
