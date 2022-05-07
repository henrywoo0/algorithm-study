#include <stdio.h>

void sort(int arr[1000], int size) {
    for(int i = size - 1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    
    int n, arr[1000] = { 0, };
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    sort(arr, n);
    
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
