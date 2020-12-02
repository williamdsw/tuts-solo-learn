#LÓGICA BOOLEANA

idade = int(input("Digite sua idade : "))
temCarta = input("Você tem carta : ")

if idade >= 18 and temCarta == "Sim":
            print("Você tem carta e pode dirigir")
else:
            if idade >= 18 or temCarta == 'Sim':
                print("Você pode tirar carta mas não pode dirigir")
            elif not idade >= 18:
                print("Você não pode tirar carta")
