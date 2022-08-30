while True:
    ct = int(input())
    if (ct == 0):
        break
    else:
        ruim = False
        words = []
        while ct > 0:
            ct -= 1
            word = input()
            words += [word]
            if not ruim:
                for word in words[:-1]:
                    if words[-1] == word[:len(words[-1])] or words[-1][:len(word)] == word:
                        ruim = True
                        break
        if ruim:
            print("Conjunto Ruim")
        else:
            print("Conjunto Bom")
