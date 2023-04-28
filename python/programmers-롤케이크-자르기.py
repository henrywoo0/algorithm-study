from collections import Counter

def solution(topping):
    answer = 0
    
    me = Counter(topping) # Counter : 배열이 들어오면 각 요소가 key, 각 요소가 존재하는 횟수가 value. dictionary를 확장한 자료형이다.
    bro = set()
    
    for i in range(len(topping)):
        me[topping[i]] -= 1
        bro.add(topping[i])
        
        if me[topping[i]] == 0:
            del me[topping[i]]
        
        if len(bro) == len(me):
            answer += 1
    
    return answer