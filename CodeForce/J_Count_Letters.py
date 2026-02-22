s = input()
d = {}

for i in s:
    if i not in d:
        d[i] = 1
    else:
        d[i] += 1

for i in sorted(d.keys()):
    print(i, d[i], sep=' : ')