def solution(v):
    result = [0,0]
    for i in range(2):
        if (v[0][i] == v[1][i]): 
            result[i] = v[2][i]
        elif (v[0][i] == v[2][i]):
            result[i] = v[1][i]
        elif (v[1][i] == v[2][i]):
            result[i] = v[0][i]
    return result




a = [[1,1],[2,2],[2,1]]

print(solution(a))