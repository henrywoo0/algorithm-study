#include <stdio.h>

int main() {
    
    int count = 1; // 단어 개수
    char str[1000000] = { 0, };
    
    scanf("%[^\n]s", str);
    
    for(int i = 0; str[i] != 0; i++) {
        if((str[i] == ' ' && i > 0) && str[i + 1] != 0) { // 문자가 공백이고, 첫번째 글자가 아니며, 마지막 글자가 아닐 때
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}
