import sys

n = int(input())
houses = sorted(map(int, input().split()))
answer = 0

if houses[0] > 1440:
    sys.exit("-1") # -1 출력과 함께 프로그램 종료

if n == 1:
    sys.exit("1")

while True:
    houses.sort(reverse=True)
    
    if houses == []:
        print(answer)
        break
    
    houses[0] -= 1
    if len(houses) > 1 and houses[1] != 0:
        houses[1] -= 1
    
    answer += 1
    houses = [i for i in houses if i != 0]
    
    if answer > 1440:
        print("-1")
        break