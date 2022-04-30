#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // 손익분기점을 영원히 못 넘는 케이스
    if(b >= c) {
        printf("-1");
        return 0;
    }
    
    int count = 0;
    long cost = a; // 총 비용
    long profit = 0; // 총 수익
    
    while(cost >= profit) {
        cost += b;
        profit += c;
        count++;
    }
    
    printf("%d", count);
    
    return 0;
}
