t = int(input())



for _ in range(t):
    n, k = map(int, input().split())
    score = list(map(int, input().split()))

    if k == 1:
        if score == sorted(score):
            print("YES")
        else:
            print("NO")    
    # if k == 1:
    #     for i in range(n-1):
    #         if score[i] > score[i+1]:
    #             print("NO")
    #             break
    #     else:
    #         print("YES")
    else:
        print("YES")