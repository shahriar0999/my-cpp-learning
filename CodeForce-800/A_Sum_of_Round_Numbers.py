t = int(input())

for _ in range(t):
    n = input().strip()  # Read as string to access digits
    length = len(n)
    
    round_numbers = []
    
    # Check each digit
    for i, digit in enumerate(n):
        if digit != '0':
            # Create round number: digit followed by zeros
            # Number of zeros = length - i - 1
            round_num = digit + '0' * (length - i - 1)
            round_numbers.append(round_num)
    
    # Print result
    print(len(round_numbers))
    print(' '.join(round_numbers))