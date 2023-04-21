def solution(food):
    answer = ''.join(str(idx) * (quantity // 2) for idx, quantity in enumerate(food))
    return answer + "0" + answer[::-1]