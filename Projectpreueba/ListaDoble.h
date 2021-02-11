#pragma once

#include "NodeDoble.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <stdio.h>
#include <cstdio>
using namespace System;
class ListaDoble {

public:

	ListaDoble(){primero = actual = NULL;};
	virtual ~ListaDoble();
	
	void insertarInicio(int id,std::string artista, std::string autor, int anio);
	void insertarFinal(int id,std::string artista, std::string autor, int anio);
    void addFromExcelData(char namFile[30]);
	void addFromExcelInsert(char namFile[30]);
	void guardarListaENarchivo(char nameFile[20]);
	void Borrar(int Eliminar);
	void insertarluegode(int b,int id, std::string artista, std::string autor, int anio);
	void insertarxPosicion(int pos,int id, std::string artistas, std::string autos, int anios);
	void ordenarPorFecha();
	void ordenarPorAutor();
	void ordenarPorId();
	void metodoSelection(Tlista );
	void Mostrar();
	String^ MostrarDatos();
	Tlista middle(Tlista start, Tlista last);
	Tlista binarysearchFecha(int value);
	Tlista binarysearchId(int value);
	Tlista returLis();
	Tlista quickSortRecur(Tlista , Tlista );
	Tlista particion(Tlista , Tlista , Tlista , Tlista );
	float metodoQuickSort();
	void radixSort();
	int getMax();
	int longitudLista();
	void borrarValu(int valu);
	void modificarValu(int id, std::string artista, std::string autor, int anio);
	bool buscarDisco(int id);

	
	/*
	void Borrar(Tlista&, int );
	//void insertarInicio(Tlista&, int insertarFinal);
	void insertarluegode(Tlista& a, int b, std::string artista, std::string autor, int anio);
	void insertarFinal(Tlista& L, std::string artista, std::string autor, int anio);
	
	String^ MostrarDatos(Tlista);
	
	*/
private:
	Tlista primero;
	Tlista actual;
//private:	friend class NodeDoble;

};


