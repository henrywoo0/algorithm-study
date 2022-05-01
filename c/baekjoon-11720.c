#include <stdio.h>

int main() {
    
    int n, sum = 0;
    int input;
    scanf("%d", &n);
    
    while(n > 0) {
        scanf("%1d", &input);
        sum += input;
        n--;
    }
    
    printf("%d", sum);
    
    return 0;
}
