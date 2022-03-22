#include <stdio.h>

int main(void) {
    int difference = 2541 - 1998;
    int year;
    
    scanf("%d", &year);
    
    // 불기 연도를 서기 연도로 변환
    printf("%d", year - difference);
    
    return 0;
}
