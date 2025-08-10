n = int(input())

for _ in range(n):

    m, x = map(int, input().split())
    array = list(map(int, input().split()))

    max1 = 0
    max2 = 0

    for i in array:
        if i == 1:
            max2 += 1
            max1 = max(max1, max2)
        else:
            max2 = 0

    if max1 <= x:
        print("YES")
    else:
        print("NO")