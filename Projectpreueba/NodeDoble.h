#pragma once
//#include <time.h>
#include <cstddef>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <fstream>
class NodeDoble {
public:
  
    void setDato(int , std::string, std::string, int );
    int  getId();
    int  getAnio();
    std::string getArtist();
    std::string getAutor();

    void setSiguente(NodeDoble* sgte);
    void setAnterior(NodeDoble* ante);
    NodeDoble* getSiguiente();
    NodeDoble* getAnterior();
private:
    int id;
    std::string artista;
    std::string autor;
    int valor;
    NodeDoble* siguiente;
    NodeDoble* anterior;
    friend class ListaDoble;
};

typedef NodeDoble* Tlista;