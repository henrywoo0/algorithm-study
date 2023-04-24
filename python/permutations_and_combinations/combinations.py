# 조합(combinations) : n개의 원소를 갖는 집합에서 r개를 순서 없이 선택하는 방법

import itertools

color_list = ['red', 'blue', 'green']

nCr = itertools.combinations(color_list, 2)
print(list(nCr)) # [('red', 'blue'), ('red', 'green'), ('blue', 'green')]