#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
    Pode-se "levantar" excessões utilizando a palavra-chave "raise"
    Seria como throw?
"""

print(10)
raise ZeroDivisionError
print(10 + 11)

#utilizando com argumentos
nome = "123"
raise NameError("Nome inválido")


#Utilizando raise sem tipo específico
try:
    num = 7 / 0

    print(num)

except:

    print("Deu erro")
    raise

