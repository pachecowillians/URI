names = []

ct = int(input())

for i in range(ct):
    names += [input()]

names.sort(key=lambda x: x[0])

for name in names:
    print(name)