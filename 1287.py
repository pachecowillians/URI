while True:
    try:
        s = input()
        s = s.replace('o', '0').replace('O', '0').replace(
            'l', '1').replace(',', '').replace(' ', '')
        i = int(s)
        if i > 2147483647:
            print("error")
        else:
            print(i)
    except EOFError:
        break
    except ValueError:
        print("error")
