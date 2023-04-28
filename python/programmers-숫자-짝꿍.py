def solution(X, Y):
    answer = ''
    
    for i in range(9, -1, -1):
        answer += (str(i) * min(X.count(str(i)), Y.count(str(i))))
        
    if answer == '':
        answer = '-1'
    elif len(answer) == answer.count('0'):
        answer = '0'
    else:
        return answer
    
    return answer