from curses.ascii import isdigit
import re

def isInSemicolonArea(i, semicolonArea):
    for semi in semicolonArea:
        if i>semi[0] and i<semi[1]:
            return False
    return True

while True:
    try:
        s = input()
        if "include" in s or "define" in s:
            print(s)
        else:
            semicolonArea = [(m.start(0), m.end(0)) for m in re.finditer(r'(for\([^)]+\))', s)]

            indentation = 0
            lineBreak = False
            for i in range(len(s)):
                if s[i] == '{':
                    print()
                    print("...."*indentation, end='')
                    print(s[i])
                    indentation += 1
                    lineBreak = True
                elif s[i] == '}':
                    if not s[i-1] == '}' and not s[i-1] == ';':
                        print()
                    indentation -= 1
                    print("...."*indentation, end='')
                    print(s[i])
                    lineBreak = True
                elif s[i] == ';':
                    if isInSemicolonArea(i, semicolonArea):
                        print(s[i])
                        lineBreak = True
                    else:
                        print(s[i], end='')
                    # if not s[i-1].isdigit() and s[i+1] != '}':
                    # print()
                else:
                    if lineBreak:
                        print("...."*indentation, end='')
                        lineBreak = False
                    print(s[i], end="")

    except EOFError:
        break
