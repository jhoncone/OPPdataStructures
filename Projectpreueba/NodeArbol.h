#pragma once

#include <cstddef>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>
#include <fstream>
class NodeArbol {
public:
   
    void setDato(int ,std::string, std::string, int);
   
    int  getId();
    std::string getArtist();
    std::string getAutor();
    int  getAnio();

    
    void setLeft(NodeArbol* );
    void setRight(NodeArbol*);
    void NodeArbol::insertaBinario(int , std::string, std::string, int);
   

    NodeArbol* getLeft();
    NodeArbol* getRight();
 
private:
    int id;
    std::string artista;
    std::string autor;
    int valor;

    NodeArbol* left;
    NodeArbol* right;

    friend class BinaryTree;
};

typedef NodeArbol* Tree;




