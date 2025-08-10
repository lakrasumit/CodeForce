n = int(input())

for _ in range(n):
    a, b = map(int, input().split())

    count = 0

    array = list(map(int, input().split()))


    if abs(b - array[-1]) >= abs(b - array[0]):
        count += abs(b - array[0])
        count += abs(array[-1] - array[0])
    elif abs(b - array[0]) > abs(b - array[-1]):
        count += abs(b - array[-1])
        count += abs(array[0] - array[-1])

    
    print(count)