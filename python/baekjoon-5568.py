import itertools

n = int(input())
k = int(input())
cards = [int(input()) for _ in range(n)]
li = []

for t in itertools.permutations(cards, k):
    li.append(''.join(map(str, t)))
    
print(len(set(li)))