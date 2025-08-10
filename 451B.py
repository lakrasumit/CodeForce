from collections import defaultdict

n = int(input())
un_sorted = list(map(int, input().split()))
sorte = sorted(un_sorted)

mapp1 = defaultdict(int)
mapp2 = defaultdict(int)



for i, j in enumerate(un_sorted):
    mapp1[j] = i
for i, j in enumerate(sorte):
    mapp2[j] = i

swap_a, swap_b = 0, 0
done = False
for i in un_sorted:
    j = un_sorted[mapp2[i]]
    if mapp2[j] == mapp1[i] and i != j:
        idx_i = mapp1[i]
        idx_j = mapp1[j]
        un_sorted[idx_i], un_sorted[idx_j] = un_sorted[idx_j], un_sorted[idx_i]
        mapp1[un_sorted[idx_i]] = idx_i
        mapp1[un_sorted[idx_j]] = idx_j
        if i > j:
            swap_a, swap_b = j, i
        else:
            swap_a, swap_b = i, j
        done = True
        break

if done:
    print("Yes")
    print(swap_a, swap_b)
else:
    print("No")
