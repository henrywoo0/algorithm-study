#include <stdio.h>

int existsWord(char str[1000], char word[10]) {
    int word_len = 0;
    int cnt;
    
    // word_len 길이 구하기
    for(int i = 0; word[i] != 0; i++) {
        word_len++;
    }
    
    // word가 있으면 1 반환, 없으면 0 반환
    for(int i = 0; str[i] != 0; i++) {
        cnt = 0;
        if(str[i] == word[0]) {
            cnt++;
            for(int j = 1; word[j] != 0; j++) {
                if (str[i + j] == word[j]) cnt++;
                if(cnt == word_len) return 1;
            }
        }
    }
    
    return 0;
}

int main(void) {
    char input[1000] = { 0, };
    int t;
    
    scanf("%s", input);
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
        char word[10] = { 0, };
        scanf("%s", word);
        
        if (existsWord(input, word)) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }
    
    return 0;
}
