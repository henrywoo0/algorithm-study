// 1부터 9999까지의 숫자가 종이에 씌어있다. 그런데 벌레가 종이를 파먹었고, 파먹힌 곳은 공교롭게도 0이 있는 곳이다.
// 그래서 1200이나 3450이 12와 345로 보이고, 6078은 2개의 숫자로 나누어져서 6과 78이 되었다.
// 벌레 먹은 종이에서 보이는 숫자들을 모두 더하면 얼마나 될까?
// 모두 더하면 37359000이 된다. 우리는 문제를 조금 바꾸어서 A에서 B까지의 벌레 먹은 숫자의 합을 구해보자.

#include <stdio.h>

int main(){
    
    int a, b;
    int sum = 0;
    int status = 0;
    
    scanf("%d %d", &a, &b);
    
    for(int i = a; i <= b; i++) {
        int num = i;
        
        while(num > 0) {
            if(num % 10 == 0) {
                sum += status;
                status = 0;
            } else {
                status *= 10;
                status += num % 10;
            }
            num /= 10;
        }
        
        sum += status;
        status = 0;
    }
    
    printf("%d", sum);
    
    return 0;
}
