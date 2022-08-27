charByLine = int(input())

count = 0

while True:
    try:
        s = input()
        while s:
            count += 1
            s = s[charByLine:]
            while (s and s[0] == ' '):
                s = s[1:]
    except EOFError:
        break

print(count)
