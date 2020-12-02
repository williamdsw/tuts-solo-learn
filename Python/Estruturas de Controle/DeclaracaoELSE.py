#DECLARAÇÃO "ELSE"


idade = int(input("Digite sua idade : "))


if idade >= 18:
    print("Você pode tirar carta")
else:
    print("Você não pode tirar carta")

if idade < 20:
    print("Você tem menos de 20 anos")
elif idade > 20:
    print("Você tem mais de 20 anos")
