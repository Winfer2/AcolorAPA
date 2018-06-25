#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <list>
#include <vector>
#include <algorithm> // funÃ§Ã£o find

#include "aresta.h"

using namespace std;

struct no{
    int id = 0;
    int grau = 0;
};

class Grafo
{
private:
	int V; // número de vértices
	list<int> *adj; // ponteiro para um array contendo as listas de adjajacências
	vector<no> graus; // lista de graus dos vértices
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

	// obtém o grau de saéda de um dado vértice
	// grau de saída é o número de arcos que saem de "v"
	int obterGrauDeSaida(int v);

	bool existeVizinho(int v1, int v2); // verifica se v2 Ã© vizinho de v1
};

#endif // GRAFO_H
