import sys

data = iter(map(int, sys.stdin.buffer.read().split()))
n = next(data)
q = next(data)
values = [next(data) for _ in range(n)]
table = [values]

k = 1
while 1 << k <= n:
    previous = table[-1]
    half = 1 << (k - 1)
    length = n - (1 << k) + 1
    table.append([previous[i] if previous[i] < previous[i + half]
                  else previous[i + half] for i in range(length)])
    k += 1

answer = []
for _ in range(q):
    left = next(data) - 1
    right = next(data) - 1
    k = (right - left + 1).bit_length() - 1
    length = 1 << k
    a = table[k][left]
    b = table[k][right - length + 1]
    answer.append(str(a if a < b else b))

sys.stdout.write('\n'.join(answer))
