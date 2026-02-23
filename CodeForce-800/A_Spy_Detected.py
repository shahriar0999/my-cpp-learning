test_case = int(input())

for _ in range(test_case):
    n = int(input())
    a = list(map(int, input().split()))
    num_freq = {}
    for i in range(n):
        if a[i] in num_freq:
            num_freq[a[i]] += 1
        else:
            num_freq[a[i]] = 1
    mst = max(num_freq.values())
    result_val = None
    for key, value in num_freq.items():
        if value !=mst:
            result_val = key

    for i, val in enumerate(a, start=1):
        if val == result_val:
            print(i)