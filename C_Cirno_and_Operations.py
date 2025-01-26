def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    ans = sum(a)
    
    while len(a) > 1:
        x = [a[i+1] - a[i] for i in range(len(a)-1)]
        
        if sum(x) < 0:
            x = [-d for d in x]
        
        ans = max(ans, sum(x))
        a = x[::-1]
    
    print(ans)

for _ in range(int(input())):
    solve()
