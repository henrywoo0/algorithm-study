#include <stdio.h>

int main() {
    
    int n;
    int beeCount = 1; // 벌집 개수 1부터 시작
    int count = 1; // 벌집 몇 겹째인지
    
    scanf("%d", &n);
    
    while(n > beeCount) {
        beeCount += 6 * count;
        count++;
    }
    
    printf("%d", count);
    
    return 0;
}
