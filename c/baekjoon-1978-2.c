#include <stdio.h>

int isPrime(int num) {
    if(num < 2) {
        return 0;
    }
    
    // 자신의 절반 이상에 해당하는 수는 나누면 항상 나머지가 0이 되지 않음.
    // 최대 n/2번 조회함
    for(int i = 2; i < num / 2; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    int n;
    int primeCnt = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        int input;
        scanf("%d", &input);
        if (isPrime(input)) primeCnt++;
    }
    
    printf("%d", primeCnt);
    
    return 0;
}
