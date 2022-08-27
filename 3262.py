numbers = {
    str([
        '***',
        '* *',
        '* *',
        '* *',
        '***',
    ]): 0,
    str([
        '  *',
        '  *',
        '  *',
        '  *',
        '  *',
    ]): 1,
    str([
        '***',
        '  *',
        '***',
        '*  ',
        '***',
    ]): 2,
    str([
        '***',
        '  *',
        '***',
        '  *',
        '***',
    ]): 3,
    str([
        '* *',
        '* *',
        '***',
        '  *',
        '  *',
    ]): 4,
    str([
        '***',
        '*  ',
        '***',
        '  *',
        '***',
    ]): 5,
    str([
        '***',
        '*  ',
        '***',
        '* *',
        '***',
    ]): 6,
    str([
        '***',
        '  *',
        '  *',
        '  *',
        '  *',
    ]): 7,
    str([
        '***',
        '* *',
        '***',
        '* *',
        '***',
    ]): 8,
    str([
        '***',
        '* *',
        '***',
        '  *',
        '***',
    ]): 9
}

m = []
m += [input()]
m += [input()]
m += [input()]
m += [input()]
m += [input()]

c = []
for i in range(0, 5):
    c.append([])
    while m[i]:
        c[i] += [m[i][:3]]
        m[i] = m[i][4:]

m = c
c = []

for i in range(len(m[0])):
    c.append([])
    for j in range(5):
        c[i].append(m[j][i])

n = 0

invalid = False

for i in range(len(c)):
    n *= 10
    if(str(c[i]) in list(numbers.keys())):
        n += numbers[str(c[i])]
    else:
        invalid = True
        break

print("BOOM!!" if invalid or n % 6 != 0 else "BEER!!")
