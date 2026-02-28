t = int(input())

for _ in range(t):
    num = int(input())
    # Show as 8 bits with leading zeros
    binary_32bit = format(num, '032b')
    
    reverse_bit = ''.join('1' if bit == '0' else '0' for bit in binary_32bit)
    
    print(int(reverse_bit,2))