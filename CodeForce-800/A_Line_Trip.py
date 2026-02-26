t = int(input())

for _ in range(t):
    n, x = map(int, input().split())
    stations = list(map(int, input().split()))
    
    # Start with first segment
    tank_size = stations[0]
    
    # Check gaps between stations
    for i in range(1, n):
        tank_size = max(tank_size, stations[i] - stations[i-1])
    
    # Check round trip from last station
    tank_size = max(tank_size, 2 * (x - stations[-1]))
    
    print(tank_size)