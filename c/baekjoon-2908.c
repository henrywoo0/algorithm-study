#include <stdio.h>
#include <math.h>

int reverseNumber(int num) {
    int reversed = 0; // 뒤집힌 숫자
    
    for(int i = 2; i >= 0; i--) { // 세자리 수니까 3번 반복
        reversed += (num % 10) * pow(10, i);
        num /= 10;
    }
    
    return reversed;
}

int main(){
    
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    n1 = reverseNumber(n1);
    n2 = reverseNumber(n2);
    
    printf("%d", n1 > n2 ? n1 : n2);
    
    return 0;
}
