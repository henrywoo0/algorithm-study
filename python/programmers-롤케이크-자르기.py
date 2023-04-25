from collections import Counter

def solution(topping):
    answer = 0
    
    me = Counter(topping)
    bro = set()
    
    for i in range(len(topping)):
        me[topping[i]] -= 1
        bro.add(topping[i])
        
        if me[topping[i]] == 0:
            del me[topping[i]]
        
        if len(bro) == len(me):
            answer += 1
    
    return answer