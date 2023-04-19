def solution(park, routes):
    x, y = 0, 0
    len_x, len_y = len(park[0]), len(park)
    
    for i in range(len_y):
        for j in range(len_x):
            if park[i][j] == 'S':
                x, y = j, i
    
    for r in routes:
        op, n = r[0], int(r[2])
        cnt = 0
        xx, yy = x, y
        for _ in range(n):
            if op == 'N' and 0 <= yy - 1 < len_y and park[yy - 1][xx] != 'X':
                yy -= 1
                cnt += 1
            elif op == 'E' and 0 <= xx + 1 < len_x and park[yy][xx + 1] != 'X':
                xx += 1
                cnt += 1
            elif op == 'S' and 0 <= yy + 1 < len_y and park[yy + 1][xx] != 'X':
                yy += 1
                cnt += 1
            elif op == 'W' and 0 <= xx - 1 < len_x and park[yy][xx - 1] != 'X':
                xx -= 1
                cnt += 1
        if cnt == n:
            x, y = xx, yy
        
    return [y, x]