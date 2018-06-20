#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <list>
#include <vector>
#include <algorithm> // função find

#include "aresta.h"

using namespace std;

class Grafo
{
private:
	int V; // número de vértices
	list<int> *adj; // ponteiro para um array contendo as listas de adjacências
	vector<aresta> arest; //ponteiro para um array contendo as cores das arestas
	int idAresta; //

public:
	Grafo(int V); // construtor
	void adicionarAresta(int v1, int v2); // adiciona uma aresta no grafo

	// obtém o grau de saída de um dado vértice
	// grau de saída é o número de arcos que saem de "v"
	int obterGrauDeSaida(int v);

	bool existeVizinho(int v1, int v2); // verifica se v2 é vizinho de v1
};

#endif // GRAFO_H
