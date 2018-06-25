#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <list>
#include <vector>
#include <algorithm> // função find

#include "aresta.h"

using namespace std;

struct no{
    int id = 0;
    int grau = 0;
};

class Grafo
{
private:
	int V; // n�mero de v�rtices
	list<int> *adj; // ponteiro para um array contendo as listas de adjajac�ncias
	vector<no> graus; // lista de graus dos v�rtices
	vector<aresta> arest; //ponteiro para um array contendo as cores das arestas
	int idAresta; //
    void setGrau();
    void ShellSort(vector<no> num);
    int verificaMenorCor(int no);



public:
    void colorirArestas();
    void imprimirCores();

	Grafo(int V); // construtor
	void adicionarAresta(int v1, int v2); // adiciona uma aresta no grafo

	// obt�m o grau de sa�da de um dado v�rtice
	// grau de sa�da � o n�mero de arcos que saem de "v"
	int obterGrauDeSaida(int v);

	bool existeVizinho(int v1, int v2); // verifica se v2 é vizinho de v1
};

#endif // GRAFO_H
