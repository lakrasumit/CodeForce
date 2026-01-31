# from collections import deque
# n, m = map(int, input().split())
# arr1 = list(map(int, input().split()))
# arr = deque([])
#
# last = len(arr1) - 1
#
# for i, j in enumerate(arr1):
#     arr.append((i, j))
#
# while arr:
#     if arr[0][1] > m:
#         arr.append((arr[0][0], arr[0][1] - m))
#         last = arr[0][0]
#         arr.popleft()
#     else:
#         arr.popleft()
#
# print(last + 1)

def quickSort(nums):

    if len(nums) <= 1:
        return nums

    i, j = -1, 0
    pivot = nums[-1]

    while nums[j] != pivot:
        if nums[j] <= pivot:
            i += 1
            nums[i], nums[j] = nums[j], nums[i]
        j += 1
    i += 1
    nums[i], nums[j] = nums[j], nums[i]

    return quickSort(nums[:i]) + [nums[i]] + quickSort(nums[i+1:])

print(quickSort([10, 7, 8, 9, 1, 5, 5, 98, 67, 54]))








