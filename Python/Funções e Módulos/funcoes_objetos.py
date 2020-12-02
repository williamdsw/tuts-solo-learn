#!/usr/bin/env python
# -*- coding: utf-8 -*-

#Funções como objetos


def Multiplicar(a, b):
    return a * b


a = 5
b = 10

#passando o método para uma variável - seria tipo delegate?
operador = Multiplicar

#usando a variável do método
print(str(a) + " * " + str(b) + " = " + str(operador(a, b)))