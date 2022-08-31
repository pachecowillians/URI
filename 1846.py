numbers = {
    0: 'zero',
    1: 'um',
    2: 'dois',
    3: 'tres',
    4: 'quatro',
    5: 'cinco',
    6: 'seis',
    7: 'sete',
    8: 'oito',
    9: 'nove',
    10: 'dez',
    11: 'onze',
    12: 'doze',
    13: 'treze',
    14: 'quatorze',
    15: 'quinze',
    16: 'dezesseis',
    17: 'dezessete',
    18: 'dezoito',
    19: 'dezenove',
    20: 'vinte',
    30: 'trinta',
    40: 'quarenta',
    50: 'cinquenta',
    60: 'sessenta',
    70: 'setenta',
    80: 'oitenta',
    90: 'noventa',
    100: 'cem',
    200: 'duzentos',
    300: 'trezentos',
    400: 'quatrocentos',
    500: 'quinhentos',
    600: 'seiscentos',
    700: 'setecentos',
    800: 'oitocentos',
    900: 'novecentos',
}


def tresDigitos(n, mil):
    s = []
    centena = (n//100)*100
    dezenaUnidade = n % 100
    if centena:
        if centena == 100 and n != 100:
            s += ["cento"]
        else:
            s += [numbers[centena]]

    if dezenaUnidade and dezenaUnidade in numbers:
        s += [numbers[dezenaUnidade]]
    else:
        dezena = ((n - centena)//10)*10
        unidade = n - centena - dezena
        if dezena:
            s += [numbers[dezena]]
        if unidade:
            s += [numbers[unidade]]

    if mil and n == 1:
        s = ["mil"]

    returnedString = " e ".join(s)

    if mil and s and s != ["mil"]:
        returnedString += " mil"

    return returnedString


while True:
    try:
        s = int(input())

        if int(s) in numbers:
            print(numbers[s])
        else:
            mil = s//1e3
            cem = s % 1e3
            cemNumber = str(int(cem))
            mil = int(mil)
            cem = int(cem)

            mil = tresDigitos(mil, True)
            cem = tresDigitos(cem, False)

            if mil and cem and (len(cemNumber) < 3 or cemNumber.count("0") == 2):
                cem = "e " + cem

            if mil and cem:
                print(mil, cem)
            elif mil:
                print(mil)
            else:
                print(cem)

    except EOFError:
        break
