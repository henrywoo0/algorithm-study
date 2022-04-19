#include <stdio.h>

void int_to(int n, int divide) {
    if (n < 2) {
        printf("%d", n);
    }
    else {
        int_to(n / divide, divide);
        
        if(n % divide < 10) {
            printf("%d", n % divide);
        } else {
            printf("%c", n % divide + 55);
        }
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    
    int_to(n, 2);
    printf("(2)\n");
    
    int_to(n, 8);
    printf("(8)\n");
    
    int_to(n, 16);
    printf("(16)\n");
    
    return 0;
}
