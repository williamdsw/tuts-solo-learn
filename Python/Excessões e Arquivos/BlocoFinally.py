#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
    Bloco finally é utilizado para executar comandos
    mesmo que tenha erros de excessões
"""

try:

    numero = 5 + 0.2 + "Haha"

    print(numero)

except:

    print("Deu erro no cálculo")

finally:

    print("Mas continuarei rodando o sistema")
    print("Beleza?")
