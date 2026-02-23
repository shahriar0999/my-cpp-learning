n = int(input())
val = 'codeforces'
for _ in range(n):
    c = input().lower()
    if c in val:
        print("YES")
    else:
        print("NO")