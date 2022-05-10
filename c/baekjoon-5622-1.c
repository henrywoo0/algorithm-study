#include <stdio.h>

int main() {
    
    int sum = 0;
    int match[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
    char str[15] = { 0, };
    
    scanf("%s", str);
    
    for(int i = 0; str[i] != 0; i++) {
        if(str[i] < 'A' || str[i] > 'Z') continue;
        sum += match[str[i] - 65];
    }
    
    printf("%d", sum);
    
    return 0;
}
