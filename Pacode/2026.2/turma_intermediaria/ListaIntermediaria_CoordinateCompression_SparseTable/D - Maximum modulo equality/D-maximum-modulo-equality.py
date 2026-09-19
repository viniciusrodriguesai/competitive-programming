import sys
from math import gcd

data = iter(map(int, sys.stdin.buffer.read().split()))
t = next(data)
answer = []

for _ in range(t):
    n = next(data)
    q = next(data)
    values = [next(data) for _ in range(n)]
    differences = [abs(values[i] - values[i - 1]) for i in range(1, n)]
    table = [differences]

    k = 1
    while 1 << k <= n - 1:
        previous = table[-1]
        half = 1 << (k - 1)
        length = n - (1 << k)
        table.append([gcd(previous[i], previous[i + half])
                      for i in range(length)])
        k += 1

    current = []
    for _ in range(q):
        left = next(data) - 1
        right = next(data) - 1
        if left == right:
            current.append('0')
        else:
            length = right - left
            k = length.bit_length() - 1
            width = 1 << k
            current.append(str(gcd(table[k][left], table[k][right - width])))

    answer.append(' '.join(current))

sys.stdout.write('\n'.join(answer))
