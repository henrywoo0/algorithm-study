#include <stdio.h>

int isPrime(int num) {
    if(num < 2) {
        return 0;
    }
    
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    
    int m, n;
    int sum = 0, min = 0;
    scanf("%d %d", &m, &n);
    
    for(int i = m; i <= n; i++) {
        if(isPrime(i)) {
            sum += i;
            if(min == 0) {
                min = i;
            }
        }
    }
    
    if(sum == 0) {
        printf("-1");
    } else {
        printf("%d\n%d\n", sum, min);
    }
    
    return 0;
}
