from collections import Counter

def solution(k, tangerine):
    answer = 0
    cnt = Counter(tangerine) # 딕셔너리(Counter는 딕셔너리를 확장)는 순서가 없다
    for value in sorted(cnt.values(), reverse=True): # key는 필요하지 않기에, value만 내림차순 정렬
        answer += 1
        k -= value
        if k <= 0:
            break
    
    return answer