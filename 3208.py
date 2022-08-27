import math as m

def isPrime(n):
    for i in range(2, int(m.sqrt(n)+1)):
        if (n % i) == 0:
            return False
    return True


k = l = 0
while True:
    find = False
    k, l = input().split()
    k = int(k)
    l = int(l)
    if (k == 0 and l == 0):
        break
    else:
        for i in range(2, l):
            if (k % i == 0 and isPrime(i)):
                find = True
                break
        if (not find):
            print("GOOD")
        else:
            print("BAD", i)
