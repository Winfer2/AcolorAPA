#include <iostream>
#include "include/Grafo.h"
#include "include/leitor.h"
#include <ctime>

using namespace std;


int main()
{
    string arquivo;


    cout<<"Insira o nome do arquivo:";
    cin>>arquivo;

    int start_s=clock();

    leitor *l = new leitor(arquivo);


	// criando um grafo de 4 vértices
    Grafo grafo(l->grafoTam);
    for(int i = 0; i<l->arestas.size();i++) grafo.adicionarAresta(l->arestas[i].x, l->arestas[i].y);


	grafo.colorirArestas();
    grafo.imprimirCores();
    grafo.maiorCor();

    int stop_s=clock();
    cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;



	return 0;
}
