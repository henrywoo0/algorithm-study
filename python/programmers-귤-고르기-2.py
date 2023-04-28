from collections import Counter

def solution(k, tangerine):
    counter = Counter(tangerine)
    tangerine.sort(key = lambda t: (-counter[t], t)) # 첫번째 인자(해당 t가 나온 개수)를 기준으로 내림차순 정렬, 두번째 인자(t 자체)를 기준으로 오름차순 정렬
    return len(set(tangerine[:k]))