#include <stdio.h>

int main() {
    int hour, minute, cookingMinute;
    
    scanf("%d %d %d", &hour, &minute, &cookingMinute);
    
    minute += cookingMinute;
    
    if(minute >= 60) {
        hour += minute / 60;
        minute %= 60;
    }
    
    if(hour >= 24) {
        hour %= 24;
    }
    
    printf("%d %d", hour, minute);
    
    return 0;
}
