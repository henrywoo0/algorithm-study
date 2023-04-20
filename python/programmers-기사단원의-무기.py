def getCountOfPrime(num):
    li = []
    for i in range(1, int(num**(1/2)) + 1):
        if num % i == 0:
            li.append(i)
            li.append(num // i)
    return len(set(li))

def solution(number, limit, power):
    answer = 0
    
    for i in range(1, number + 1):
        cnt = getCountOfPrime(i)
        answer += cnt if cnt <= limit else power
        
    return answer