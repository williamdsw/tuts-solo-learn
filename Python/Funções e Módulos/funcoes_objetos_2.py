#!/usr/bin/env python
# -*- coding: utf-8 -*-

#Funções como objetos 2


def Somar(x, y):
    return x + y

"Posso utilizar uma função como parâmetro de outra"
def Repetir(funcao, x, y):
    return funcao(funcao(x, y), funcao(x, y))

a = 3
b = 8

print(Repetir(Somar, a, b))