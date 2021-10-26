import sys

s = set()
nums = [i for i in range(1,21)]
n = int(input())

for i in range(n):
    tmp = sys.stdin.readline().strip().split()
    
    if len(tmp) == 1:
        if tmp[0] == "all":
            s.update(nums)
        else:
            s = set()
        continue

    cmd , num = tmp[0], tmp[1]
    num = int(num)

    if cmd == "add":
        s.add(num)
    elif cmd == "check":
        print(1 if num in s else 0)
    elif cmd == "remove":
        s.discard(num)
    elif cmd == "toggle":
        if num in s : s.discard(num)
        else : s.add(num)