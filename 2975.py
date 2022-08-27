def rotate(s):
    return s[1:] + s[:1]


count = 0

s = input()

maxWord = ''
maxWordCount = 0
maxWordIndex = -1


for i in range(len(s)):
    if (s > maxWord):
        maxWord = s
        maxWordCount = 1
        maxWordIndex = i+1
    elif (s == maxWord):
        maxWordCount += 1
    s = rotate(s)

print(maxWordCount, maxWordIndex)
