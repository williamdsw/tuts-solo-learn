#FUNÇÕES EM LIST

#variavel
valores = [0, 1, 2]

#input
num = int(input("Digite qualquer numero : "))

#append() = Adiciona um valor à lista
valores.append(num)

#len(list) = retorna o tamanho de itens de uma lista
quantidade = len(valores)

#printando
print("Quantidade de números na lista : " + str(quantidade))

num = int(input("Digite outro numero : "))

#insert(index, value) = Insere um valor em determinado índice
valores.insert(1, num)

#index(value) retorna o index que está armazenado o valor
print("Seu valor está no indíce :  " + str(valores.index(num)))
