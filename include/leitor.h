//Deborah Conde 201465629AC
//Matheus Soares Santos 201465580C
//Rodrigo Coelho Vila Verde 201565567AC 
#ifndef LEITOR_H
#define LEITOR_H
#include <string>
#include <fstream>
#include <vector>
#include <map>

struct lista{
    int x;
    int y;
};

using namespace std;
class leitor
{
    public:
        leitor(string path);
        ifstream file;
        int grafoTam;
        vector<lista> arestas;

    protected:

    private:

};

#endif // LEITOR_H
