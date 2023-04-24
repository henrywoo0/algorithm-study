# 중복 순열 : 반복 가능한 객체에 대해 중복 허용하고 n개 추출
# itertools.product()

import itertools

arr = [1, 2, 3, 4]
print(list(itertools.product(arr, repeat=2))) # [(1, 1), (1, 2), (1, 3), (1, 4), (2, 1), (2, 2), (2, 3), (2, 4), (3, 1), (3, 2), (3, 3), (3, 4), (4, 1), (4, 2), (4, 3), (4, 4)]