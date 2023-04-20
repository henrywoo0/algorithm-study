def solution(s):
    answer = []
    alphabet_dict = dict()
    
    for idx, alphabet in enumerate(list(s)):
        answer.append(-1 if alphabet not in alphabet_dict else idx - alphabet_dict[alphabet])
        alphabet_dict[alphabet] = idx
    
    return answer