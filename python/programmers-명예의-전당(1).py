def solution(k, score):
    answer = []
    rank = []
    
    for s in score:
        rank.append(s)
        rank.sort(reverse=True)
        if len(rank) > k:
            del rank[k]
        answer.append(rank[-1])
        
    return answer