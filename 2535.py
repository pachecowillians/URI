while True:
    try:
        count = 0

        ct = int(input())

        for i in range(ct):
            e = input()
            r = input()
            n = input()
            input()

            if (e == "cachorro" and " " in n and len(list(filter(lambda name: name[0] == r[0], n.split(' ')))) > 0):
                count += 1

        print(count)
    except EOFError:
        break
