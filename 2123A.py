from collections import defaultdict
n = int(input())

for i in range(n):

        assign = int(input())
        repl = assign
        mapp = defaultdict(int)

        for i in range(assign):
            for j in range(i + 1, assign):
                if (i + j) % 4 == 3:
                    mapp[(i, j)] += 1
        m = 0
        while assign:

            for i in range(repl):
                if (m, i) in mapp:
                    del mapp[(m, i)]




