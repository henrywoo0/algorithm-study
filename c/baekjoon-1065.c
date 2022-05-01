#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        if (i < 100) {
            count++;
            continue;
        }
        
        int dif = i % 100 / 10 - i % 10; // 두 수 간의 차이
        int num = i / 10; // num 값을 수정하기 위해 복사
        
        while(1) {
            if((num % 100 / 10 - num % 10) != dif) {
                break;
            }
            num /= 10;
            
            // dif가 모두 같을 때
            if(num < 10) {
                count++;
                break;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}
