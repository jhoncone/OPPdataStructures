#pragma once
#include "NodeArbol.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <stdio.h>
#include <cstdio>
using namespace System;


class BinaryTree {

public:

	BinaryTree() {
		root = p = NULL;

	};
	virtual ~BinaryTree();

	void insertaNodo(int ids, std::string artist, std::string autor, int anio);
	void insertar(int id, std::string artist, std::string autor, int anio);
	void preOrden(Tree arbol);
	void inOrden(Tree arbol);
	void postOrden(Tree arbol);

	void mostrar();
	void recorrerxNivel();
	void TreeAddFromExcelData(char nameFile[30]);
	void guardarArbolenArchivo(Tree arbol, char nameFile[30]);
	Tree returnRaiz();
	int cont(Tree arbol);
	void verArbol(Tree arbol, int n);
	void preOrder(Tree arbol, String^& Texto);
	void inOrder(Tree arbol, String^& Texto);
	void postOrder(Tree arbol, String^& Texto);

private:
	//Tree primero;
	//Tree actual;
	Tree root;
	Tree p;
	

};



