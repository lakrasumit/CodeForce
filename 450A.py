n, m = map(int, input().split())
arr1 = list(map(int, input().split()))
arr = []

last = len(arr1) - 1

for i, j in enumerate(arr1):
    arr.append((i, j))

while arr:
    if arr[0][1] > m:
        arr.append((arr[0][0], arr[0][1] - m))
        last = arr[0][0]
        arr.pop(0)
    else:
        arr.pop(0)

print(last + 1)







