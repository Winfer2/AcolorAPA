#include "Grafo.h"
#include <limits.h>

Grafo::Grafo(int V)
{
	this->V = V; // atribui o número de vértices
	adj = new list<int>[V]; // cria as listas
	this->idAresta = 0;
}

void Grafo::adicionarAresta(int v1, int v2)
{
	// adiciona vértice v2 à  lista de vértices adjacentes de v1
	adj[v1].push_back(v2);
	aresta *aux = new aresta(v1,v2,this->idAresta);
	arest.push_back(*aux);
	this->idAresta++;
}

int Grafo::obterGrauDeSaida(int v)
{
	// basta retornar o tamanho da lista que é a quantidade de vizinhos
	return adj[v].size();
}

bool Grafo::existeVizinho(int v1, int v2)
{
	if(find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end())
		return true;
	return false;
}


void Grafo::ShellSort(vector<no> num){//ordena um vetor de inteiros
    int i, flag=1, numLength = V;
    int d = numLength;
    int temp;
    while (flag || (d>1)){
        flag = 0;
        d = (d+1)/2;
        for (i=0; i<(numLength - d); i++){
            if (num[i+d].grau > num[i].grau){
                temp = num[i+d].grau;
                num[i+d].grau = num[i].grau;
                num[i].grau = temp;
                flag = 1;
            }
        }
    }
}


int Grafo::verificaMenorCor(int no){
    int menorCor=0;

            for(int i = 0; i<this->V;i++){
            if(existeVizinho(no,i)){
            for(int j=0; j<this->arest.size();j++){
                if((arest[j].getNo1()==no) && (arest[j].getNo2()==i)){
                    if(arest[j].getCor() > menorCor) menorCor = arest[j].getCor();
                }
            }
        return menorCor;

    }}
    return 0;
}

void Grafo::setGrau(){
    for(int i=0 ; i < this->V ; i++){
        no auxNo;
        auxNo.id = i;
        auxNo.grau = obterGrauDeSaida(i);
        graus.push_back(auxNo);
    }
}



void Grafo::colorirArestas(){
    int auxCor1=0, auxCor2=0, corFinal=1;

    setGrau();
    ShellSort(graus);
    for(int i = graus.size()-1 ; i > 0 ; i--){
        auxCor1 = verificaMenorCor(graus[i].id);

        for(int j = 0; j<this->V;j++){
            if(existeVizinho(i,j))
            auxCor2 = verificaMenorCor(j);
        }

        if(auxCor1 >= auxCor2){
                corFinal = auxCor1+1;
        }else{
                corFinal = auxCor2+1;
        }

        arest[i].setCor(corFinal);
    }
}

void Grafo::imprimirCores(){
    for(int i = 0; i < this->arest.size();i++){
        cout << "No1: " << arest[i].getNo1()<< " - No2: " << arest[i].getNo2()<< " - Cor: " << arest[i].getCor() <<endl;
    }
}
