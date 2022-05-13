#include <stdio.h>

int main() {
    
    int n;
    
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        int sum = i;
        int con = i;
        
        while(con > 0) {
            sum += con % 10;
            con /= 10;
        }
        
        if(sum == n) {
            printf("%d", i);
            return 0;
        }
    }
    
    printf("0");
    
    return 0;
}
