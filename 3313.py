def rotate(s):
    return s[-1:] + s[:-1]


count = 0

while True:
    count += 1
    s = input()
    if (s == "*"):
        break
    else:
        words = []
        for i in range(len(s)):
            words += [s]
            s = rotate(s)
        words.sort()
        print("Caso {}: {} {}".format(count, words[0], words[-1]))
