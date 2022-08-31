while True:
    try:
        usernames = {}
        namesOutOfPattern = 0


        ct, age = input().split()
        ct = int(ct)

        for _ in range(ct):
            s = input().split()
            username = ""
            for name in s:
                username += name[0]
            if username not in usernames:
                usernames[username] = True
            else:
                namesOutOfPattern += 1

        print(namesOutOfPattern)
    except EOFError:
        break
