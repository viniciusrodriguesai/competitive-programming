import sys

data = iter(map(int, sys.stdin.buffer.read().split()))
n = next(data)
arrivals = []
departures = []

for _ in range(n):
    arrivals.append(next(data))
    departures.append(next(data))

arrivals.sort()
departures.sort()

i = j = current = answer = 0
while i < n:
    if arrivals[i] < departures[j]:
        current += 1
        answer = max(answer, current)
        i += 1
    else:
        current -= 1
        j += 1

print(answer)
