from itertools import permutations

n, m = map(int, input().split())
li = map(int, input().split())

for i in sorted(set(permutations(sorted(li), m))):
    print(*i)