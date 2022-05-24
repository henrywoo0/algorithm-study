// 이 수열은 "개미"라는 소설에 나오는 내용이므로 흔히 "개미 수열"이라고 부른다.
// 첫번째 수열엔 1이 있고
// 다음 수열은 윗줄에 1이 1개 있으므로 1 1
// 그 다음 수열은 윗줄에 1이 두 개 있으므로 1 2
// 그 다음 수열은 윗줄에 1이 1개, 2가 1개 있으므로 1 1 2 1
// 숫자 n을 입력받아 n번째 수열의 합을 구하시오.

// 1
// 1 1
// 1 2
// 1 1 2 1
// 1 2 2 1 1 1
// 1 1 2 2 1 3

#include <stdio.h>
#define ARR_SIZE 1000

int main() {
    
    int n;
    int arr[ARR_SIZE] = { 0, };
    
    scanf("%d", &n);
    
    arr[0] = 1;
    
    for(int i = 1; i < n; i++) {
        int count = 1; // 같은 숫자가 얼마나 반복되었는지 세기 위한 변수
        int arrIdx = 0; // 변경할 배열의 idx 진행 상황 세기 위한 변수
        int originalArray[ARR_SIZE] = { 0, }; // 원래 배열을 변경하기 위해 미리 백업
        
        // 배열 복사
        for(int j = 0; arr[j] != 0; j++) {
            originalArray[j] = arr[j];
        }
        
        // 메인 로직
        for(int j = 0; originalArray[j] != 0; j++) {
            if(originalArray[j] == originalArray[j + 1]) {
                count++;
            } else {
                arr[arrIdx++] = originalArray[j];
                arr[arrIdx++] = count;
                count = 1; // 1로 초기화
            }
        }
    }

    int sum = 0;
    
    // 배열의 합 구하기
    for(int i = 0; arr[i] != 0; i++) {
        sum += arr[i];
    }
    
    printf("%d", sum);
    
    return 0;
}
