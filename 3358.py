vowels = ['a', 'e', 'i', 'o', 'u']

ct = int(input())
for i in range(0, ct):
    easy = True
    s = input()
    if (len(s) >= 3):
        for i in range(0, len(s)-2):
            if (s[i].lower() not in vowels and s[i+1].lower() not in vowels and s[i+2].lower() not in vowels):
                easy = False
                break
    if(easy):
        print(s, "eh facil")
    else:
        print(s, "nao eh facil")