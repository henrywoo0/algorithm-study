# 순열 조합 문제
from itertools import permutations

li = list(map(int, input().replace("[", '').replace("]", "").split(",")))
k = li.pop()

ps = permutations(li)
li = list(sorted([p for p in ps]))
