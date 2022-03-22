#include <stdio.h>

int main(void) {
    int i = 0, cnt = 0;
    char str[100] = {0,};
    scanf("%s", str);
    
    // 크로아티아 알파벳 판별하며 반복
    while(str[i] != 0) {
        if(str[i + 1] == '=' || str[i + 1] == '-')
        {
            cnt++;
            i += 2;
        }
        else if (str[i + 1] == 'j' && (str[i] == 'l' || str[i] == 'n'))
        {
            cnt++;
            i += 2;
        }
        else if (str[i] == 'd' && (str[i + 1] == 'z' && str[i + 2] == '=')) {
            cnt++;
            i += 3;
        }
        else {
            cnt++;
            i++;
        }
    }
    
    printf("%d\n", cnt);
    
    return 0;
}
