#!/usr/bin/env python
# -*- coding: utf-8 -*-

#definindo a função ~def~


def minha_funcao():
    print("Ola")
    print("Python")
    print("OpenSUSE")

#chamando a função
minha_funcao()

#definindo função com dois parâmetros


def numeroMaior(primeiro, segundo):

    if primeiro > segundo:
        print("Primeiro numero é o maior")
    else:
        print("Segundo numero é o maior")

#Variaveis
primeiro = int(input("Digite o primeiro numero : "))
segundo = int(input("Digite o segundo numero : "))

#Chamando metodo com argumentos
numeroMaior(primeiro, segundo)