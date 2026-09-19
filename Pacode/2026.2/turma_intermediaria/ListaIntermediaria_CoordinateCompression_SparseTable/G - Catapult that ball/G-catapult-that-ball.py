import sys

data = iter(map(int, sys.stdin.buffer.read().split()))
answers = []

while True:
    try:
        n = next(data)
        m = next(data)
    except StopIteration:
        break

    heights = [next(data) for _ in range(n)]
    table = [heights]
    k = 1
    while 1 << k <= n:
        previous = table[-1]
        half = 1 << (k - 1)
        length = n - (1 << k) + 1
        table.append([max(previous[i], previous[i + half]) for i in range(length)])
        k += 1

    answer = 0
    for _ in range(m):
        start = next(data)
        end = next(data)
        left = min(start, end)
        right = max(start, end)
        if right - left <= 1:
            answer += 1
            continue

        first = left
        last = right - 2
        k = (last - first + 1).bit_length() - 1
        length = 1 << k
        highest = max(table[k][first], table[k][last - length + 1])
        if highest <= heights[start - 1]:
            answer += 1

    answers.append(str(answer))

sys.stdout.write('\n'.join(answers))
