#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    
    // 손익분기점을 영원히 못 넘는 케이스
    if(b >= c) {
        printf("-1");
        return 0;
    }
    
    printf("%d", (int)(a / (c - b)) + 1);
    
    return 0;
}
