from itertools import combinations

L, C = map(int, input().split())
li = sorted(input().split())

for word in combinations(li, L): # 항상 정렬된(오름차순) 결괏값이라면 permutations 대신 combinations
    cnt_vow = 0
    for i in word:
        if i in "aeiou":
            cnt_vow += 1
    
    if cnt_vow >= 1 and L - cnt_vow >= 2:
        print(''.join(word))