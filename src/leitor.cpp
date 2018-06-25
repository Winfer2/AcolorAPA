#include "leitor.h"
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;
leitor::leitor(string path){

    string line;

    file.open(path);

    if(file.is_open()){

        file>>line;
        this->grafoTam = atoi(line.c_str());
        do{

            file>>line;
            int x1 = atoi(line.c_str());


            file>>line;
            int y1 = atoi(line.c_str());

            lista l;
            l.x = x1;
            l.y = y1;

            arestas.push_back(l);
        }while(!file.eof());

    }else{
        cout<<endl<<"Arquivo digitado nao existe"<<endl;
    }
    file.close();

}

