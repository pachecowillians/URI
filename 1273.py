firstIteration = True
while True:
    ct = int(input())
    if (ct == 0):
        break
    else:
        if (firstIteration):
            firstIteration = False
        else:
            print()
        names = []
        maxLen = 0
        for i in range(ct):
            names += [input()]
            if (len(names[-1]) > maxLen):
                maxLen = len(names[-1])
        for name in names:
            name = " "*(maxLen - len(name)) + name
            print(name)
