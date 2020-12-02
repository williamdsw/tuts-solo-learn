#LOOP "WHILE"

numero = int(input("Digite um numero : "))
i = 1

print("Tabuada do " + str(numero))

#while normal
while i <= 10:
    print(numero * i)
    i += 1

#Utilizando break

i = 0

while 1 == 1:
    print("Loopando até 5...")

    i += 1

    if i >= 5:
        print("Parei no 5")
        break

#Utilizando continue

i = 0

while i < 10:
    print(i)

    i += 1

    if i == 3:
        print("Pulei o 3")
        continue

    if i == 8:
        print("Parei no 8")
        break

#Loop infinito
while 1 == 1:
    print("Loop infinito. Aperte Ctrl C para pará-lo")


