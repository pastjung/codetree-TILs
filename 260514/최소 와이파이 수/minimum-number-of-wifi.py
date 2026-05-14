n, m = map(int, input().split())
arr = list(map(int, input().split()))

# Please write your code here.
result = 0
M = 2 * m + 1
prefix = 0
zero_seq = 0

for idx in range(n):
    if arr[idx] == 0:
        zero_seq += 1
    elif arr[idx] == 1:
        if zero_seq >= M:
            len = idx - prefix - zero_seq
            if len % M == 0:
                result += len // M
            else:
                result += len // M + 1
            prefix = idx
        zero_seq = 0

len = idx - prefix - zero_seq + 1
if len % M == 0:
    result += len // M
else:
    result += len // M + 1
print(result)