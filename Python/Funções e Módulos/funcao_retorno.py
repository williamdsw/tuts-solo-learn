#!/usr/bin/env python
# -*- coding: utf-8 -*-

#utilizando return


def menorString(primeira, segunda):

    if len(primeira) < len(segunda):
        return primeira
    else:
        return segunda

primeira = "Hello World Python in SUSE!"
segunda = "Olá Mundo Python no SUSE"

print("A menor das strings é : " + str(menorString(primeira, segunda)))

