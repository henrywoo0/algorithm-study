#include <stdio.h>

int main() {
    
    int t; // 테스트케이스 개수
    
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
        int n; // 문자 반복 횟수
        char str[20] = { 0, };
        scanf("%d %s", &n, str);
        
        for(int j = 0; str[j] != 0; j++) {
            for(int k = 0; k < n; k++) {
                printf("%c", str[j]);
            }
        }
        
        printf("\n");
    }
    
    return 0;
}
