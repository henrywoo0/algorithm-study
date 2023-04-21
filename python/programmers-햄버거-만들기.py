def solution(ingredient):
    answer = 0
    li = []
    
    for i in ingredient:
        li.append(i)
        if li[-4:] == [1, 2, 3, 1]:
            answer += 1
            for _ in range(4):
                li.pop()
    
    return answer