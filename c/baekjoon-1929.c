#include <stdio.h>

int isPrime(int num) {
    if(num < 2) return 0;
    
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) return 0;
    }
    
    return 1;
}

int main() {
    
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    for(int i = n; i <= m; i++) {
        if(isPrime(i)) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
