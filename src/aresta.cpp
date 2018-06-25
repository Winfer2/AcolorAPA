#include "aresta.h"

aresta::aresta(int no1, int no2, int id)
{
    this->no1=no1;
    this->no2=no2;
    this->id=id;
}


int aresta::getCor()
{
    return this->cor;
}

int aresta::getNo1()
{
    return this->no1;
}

int aresta::getNo2()
{
    return this->no2;
}

int aresta::getId()
{
    return this->id;
}

void aresta::setCor(int cor)
{
    this->cor=cor;
}
