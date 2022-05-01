#include <stdio.h>

int main() {
    
    int dice1, dice2, dice3;
    scanf("%d %d %d", &dice1, &dice2, &dice3);
    
    if (dice1 == dice2 && dice2 == dice3) {
        printf("%d", 10000 + dice1 * 1000);
    } else if ((dice1 == dice2 || dice2 == dice3) || dice1 == dice3) {
        printf("%d", 1000 + (dice1 == dice2 ? dice1 : dice3) * 100);
    } else {
        int biggest = (dice1 > dice2 ? dice1 : dice2);
        biggest = biggest > dice3 ? biggest : dice3;
        printf("%d", 100 * biggest);
    }
    
    return 0;
}
