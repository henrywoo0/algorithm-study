# 순열(permutations) : 서로 다른 n개의 원소에서 r개를 중복 없이 순서에 상관있게 선택/나열하는 것

import itertools

color_list = ['red', 'blue', 'green']
nPr = itertools.permutations(color_list, 2)
print(list(nPr)) # [('red', 'blue'), ('red', 'green'), ('blue', 'red'), ('blue', 'green'), ('green', 'red'), ('green', 'blue')]