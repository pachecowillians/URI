def VerificaPalavraLetra(palavra, letra):
    for x in range(len(palavra)):
        if (palavra[x] == letra):
            return 1
    return 0


def ContaPalavrasComLetra(lista, letra):
    contPalavras = 0
    contPalavrasComLetra = 0

    for c in range(len(lista)):
        contPalavrasComLetra += VerificaPalavraLetra(lista[c], letra)
        contPalavras += 1

    return (contPalavrasComLetra/contPalavras)*100


letra = str(input())
letra = letra[0]
frase = input().split(" ")

print("{:.1f}".format(ContaPalavrasComLetra(frase, letra)))
