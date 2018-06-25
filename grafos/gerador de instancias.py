from random import randint

arquivo = open(input("nome do grafo a se criar: ")+".txt", 'w+')

numVertices = input("numero de vertices: ")

arquivo.writelines(numVertices)
arquivo.writelines('\n')

numArestas = randint(int(numVertices),(int(numVertices))*(int(numVertices)))

v1 = []
v2 = []

for i in range(numArestas):
        condicao = 1
        v1.append(randint(0, int(numVertices)))
        v2.append(randint(0, int(numVertices)))
        if(v1[i] == v2[i]):
                condicao = 0
        else:
                for j in range(len(v1)-1):
                        if((v1[i] == v1[j]) and (v2[i] == v2[j])):
                                condicao = 0
                        if((v1[i] == v2[j]) and (v2[i] == v1[j])):
                                condicao = 0
        if condicao :
                arquivo.writelines(str(v1[i]) + " " + str(v2[i]))
                arquivo.writelines('\n')
arquivo.close()
