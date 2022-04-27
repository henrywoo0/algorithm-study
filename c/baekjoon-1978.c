#include <stdio.h>

int isPrime(int num) {
    if(num < 2) {
        return 0;
    }
    
    for(int i = 2; i < num; i++) {
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
