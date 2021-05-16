t = int(input())
while t > 0:
    r, z = input().split()
    r = int(r)
    z = int(z)
    inp = input()
    if z*'*' in inp:
        print("yes")
    else:
        print("no")
    t -= 1
