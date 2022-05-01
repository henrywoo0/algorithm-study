#include <stdio.h>

int searchAlphabet(char *str, char c) {
    
    for(int i = 0; str[i] != 0; i++) {
        if(str[i] == c) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    
    char str[100] = { 0, };
    scanf("%s", str);
    
    for(int i = 97; i <= 122; i++) {
        printf("%d ", searchAlphabet(str, i));
    }
    
    return 0;
}
