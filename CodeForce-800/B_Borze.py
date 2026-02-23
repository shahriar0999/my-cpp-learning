s = input()
result = ""
i = 0

while i < len(s):
    if s[i] == '.':
        result += '0'
        i += 1
    elif s[i] == '-':
        if s[i+1] == '.':
            result += '1'
            i += 2
        else:  # s[i+1] == '-'
            result += '2'
            i += 2

print(result)