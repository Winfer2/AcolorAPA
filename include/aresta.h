#ifndef ARESTA_H
#define ARESTA_H


class aresta
{
    public:
        aresta(int no1, int no2, int id);
        int getCor();
        int getNo1();
        int getNo2();
        void setCor(int cor);
        int getId();

    protected:

    private:
        int cor = 0;
        int no1,no2; //nos conectados
        int id; //indice da aresta
};

#endif // ARESTA_H
