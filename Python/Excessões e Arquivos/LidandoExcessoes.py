#!/usr/bin/env python
# -*- coding: utf-8 -*-

#Tratando excessões : necessário bloco try/except (catch)

#Aqui "tento" executar os comandos
try:
    sete = 7
    zero = 0

    print(sete / zero)

    print("Cálculo concluido")

#Caso de um erro, aqui será tratada a excessão
except ZeroDivisionError:
    print("Erro no cálculo!")
    print("Por causa da divisão por zero")


#Utilizando múltiplos except
try:

    num = 10

    print(num / 2)
    print(num + "Dois")

except ZeroDivisionError:

    print("Erro na divisão por 0")

except TypeError:

    print("Erro em somar int com string")


#Utilizando sem tipos de excessões
try:

    valor = 5 + "Dois"

    print(valor)

except:

    print("Aconteceu um erro no sistema")