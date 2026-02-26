n = int(input())
skills = list(map(int, input().split()))

# Store indices for each type (1-based indexing)
type1 = []
type2 = []
type3 = []

for i in range(n):
    if skills[i] == 1:
        type1.append(i + 1)  # +1 because children numbered from 1
    elif skills[i] == 2:
        type2.append(i + 1)
    else:  # skills[i] == 3
        type3.append(i + 1)

# Maximum number of teams
teams = min(len(type1), len(type2), len(type3))

print(teams)

# Form teams
for i in range(teams):
    print(type1[i], type2[i], type3[i])