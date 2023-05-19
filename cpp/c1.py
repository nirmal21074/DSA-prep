t = int(input())

for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    sum_l = sum(l)
    sum_t = l.count(0)
    if sum_t > n // 2:
        print("-1")
    else:
        sum_f = n - sum_l + sum_t
        print(max(sum_f, sum_t))
