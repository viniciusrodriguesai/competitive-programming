import sys
from bisect import bisect_right

data = iter(map(int, sys.stdin.buffer.read().split()))
n = next(data)
values = [next(data) for _ in range(n)]
m = next(data)

gaps = [values[i + 1] - values[i] for i in range(n - 1)]
table = [gaps]
k = 1
while 1 << k <= n - 1:
    previous = table[-1]
    half = 1 << (k - 1)
    length = n - (1 << k)
    table.append([
        previous[i] if previous[i] > previous[i + half] else previous[i + half]
        for i in range(length)
    ])
    k += 1

answer = []
for _ in range(m):
    t = next(data)
    d = next(data)
    pos = bisect_right(values, t) - 1

    for k in range(len(table) - 1, -1, -1):
        jump = 1 << k
        if pos >= jump and table[k][pos - jump] <= d:
            pos -= jump

    answer.append(str(pos + 1))

sys.stdout.write('\n'.join(answer))
