import itertools

arr = [1, 2, 3, 4]

print(list(itertools.combinations_with_replacement(arr, 2))) # [(1, 1), (1, 2), (1, 3), (1, 4), (2, 2), (2, 3), (2, 4), (3, 3), (3, 4), (4, 4)]