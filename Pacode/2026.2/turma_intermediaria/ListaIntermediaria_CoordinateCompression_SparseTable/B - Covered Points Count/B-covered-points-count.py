import sys

data = iter(map(int, sys.stdin.buffer.read().split()))
n = next(data)
events = []

for _ in range(n):
    left = next(data)
    right = next(data)
    events.append((left, 1))
    events.append((right + 1, -1))

events.sort()
answer = [0] * (n + 1)
previous = events[0][0]
covering = 0

for x, change in events:
    if covering:
        answer[covering] += x - previous
    covering += change
    previous = x

sys.stdout.write(' '.join(map(str, answer[1:])))
