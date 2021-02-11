
#include "ListaDoble.h"
#define MAXLINEA 255
using namespace System;


ListaDoble::~ListaDoble()
{

	Tlista aux;

	while (primero)
	{
		aux = primero;
		primero = primero->getSiguiente();
		delete aux;
	}

	actual = NULL;
}


void NodeDoble::setDato(int id, std::string artista, std::string autor, int Dato)
{
	this->id = id;
	this->valor = Dato;
	this->artista = artista;
	this->autor = autor;
	return;
}

std::string NodeDoble::getArtist() { return artista; }
std::string NodeDoble::getAutor() { return autor; }
int NodeDoble::getAnio() { return valor; }
int NodeDoble::getId() { return id; }

void NodeDoble::setSiguente(NodeDoble* sigte = NULL)
{
	siguiente = sigte;
	return;
}
void NodeDoble::setAnterior(NodeDoble* ante = NULL)
{
	anterior = ante;
	return;
}
Tlista NodeDoble::getSiguiente() { return siguiente; }
Tlista NodeDoble::getAnterior() { return anterior; }

void ListaDoble::borrarValu( int valu)
{
	Tlista q, t, p,s;

	q = primero;
	s = primero;
	int band = 1, cont = 0;
	while (q->getSiguiente() != NULL && band == 1)
	{
		if (q->getId() != valu)
		{
			t = q;
			q = q->getSiguiente();
			p = q;
			cont++;
		}
		else {
			band = 0;
		}
	}
	if (band == 0)
	{
		if (cont == 0)
		{
			primero = primero->getSiguiente();
			s->siguiente->anterior = NULL;
			delete(s);
		}
		else {
			//Tlista p;
			p = q, valu = p->getId();
			//q->sgte=q->sgte;
			t->siguiente = q->getSiguiente();
			q->siguiente->anterior = t;

			//p->ante=t;
			delete(p);
		}
		std::cout << "se borro  el nodo con valor " << valu << "y posicion" << cont <<"\n";

	}
	else {
		std::cout << "no se hallo el valor" <<"\n";
	}

}
bool ListaDoble::buscarDisco(int id)
{
	Tlista q, t, p;
	bool bands = false;
	q = primero;

	int band = 1, cont = 0;
	while (q->getSiguiente() != NULL && band == 1)
	{
		if (q->getId() != id)
		{
			t = q;
			q = q->getSiguiente();
			p = q;
			cont++;
		}
		else {
			band = 0;
		}
	}
	if (band == 0)
	{
		std::cout << "el dato ya esta registrado " << q->getId() << "y posicion" << cont << "\n";

		bands = true;

	}
	else {
		std::cout << "no se hallo el valor" << "\n";
	}
	return bands;


}

void ListaDoble::modificarValu(int id, std::string artista, std::string autor, int anio)
{
	Tlista q, t, p;

	q = primero;

	int band = 1, cont = 0;
	while (q->getSiguiente() != NULL && band == 1)
	{
		if (q->getId() != id)
		{
			t = q;
			q = q->getSiguiente();
			p = q;
			cont++;
		}
		else {
			band = 0;
		}
	}
	if (band == 0)
	{

		std::cout << "se hallo y modifico el nodo con valor " << q->getId() << "y posicion" << cont<<"\n";
		
		q->id= id;
		q->artista = artista;
		q->autor = autor;
		q->valor = anio;

	}
	else {
		std::cout << "no se hallo el valor" <<"\n";
	}

}



void ListaDoble::radixSort() {


	int max = getMax();
	if (max == -1) {
		std::cout << "List is empty" << "\n";
		return;
	}


	int numberOfDigits = 0;
	while (max != 0) {
		max = max / 10;
		numberOfDigits++;
	}


	int exp = 1;


	while (numberOfDigits != 0) {

		Tlista count[10] = {};

		Tlista current = primero;

	
		while (current != nullptr) {

			
			Tlista tempNext = current->siguiente;
			current->siguiente = nullptr;

			int digit = (current->id/ exp) % 10;

			if (count[digit] == nullptr) {
	
				count[digit] = current;

			}
			else {
		
				Tlista temp = count[digit];

				while (temp->siguiente != nullptr) {
					temp = temp->siguiente;
				}
				temp->siguiente = current;

			}

			
			current = tempNext;
		}

		
		Tlista tempRoot = nullptr;
		Tlista endNode = nullptr; 
		for (int i = 0; i <= 9; ++i) {
			if (count[i] == nullptr) {
				continue;
			}

			if (tempRoot == nullptr) {
				tempRoot = count[i];
			}
			else {
				endNode->siguiente = count[i];
			}

			endNode = count[i];
			while (endNode->siguiente != nullptr) {
				endNode = endNode->siguiente;
			}

		}

	
		primero = tempRoot;

		exp = exp * 10;
		numberOfDigits--;
	}

}


int ListaDoble::getMax() {

	int max = -1;

	Tlista current = primero;
	while (current != nullptr) {

		if (current->id > max) {
			max = current->id;
		}
		current = current->siguiente;
	}

	return max;
}



Tlista  getTail(Tlista cab)
{
	while (cab != NULL && cab->getSiguiente() != NULL)
		cab = cab->getSiguiente();
	return cab;
}

Tlista ListaDoble::particion(Tlista cab, Tlista cabu, Tlista newCab, Tlista newCabu) {
	Tlista pivot = cabu;
     Tlista prev = NULL, cur = cab, tail = pivot;

	while (cur != pivot) {
		if (cur->getAnio() < pivot->getAnio()) {
			if ((newCab) == NULL)
				(newCab) = cur;
			prev = cur;
			cur = cur->getSiguiente();
		}
		else {

			if (prev) {
				prev->siguiente = cur->getSiguiente();
			}

			Tlista tmp = cur->getSiguiente();
			cur->siguiente = NULL;
			tail->siguiente= cur;
			tail = cur;
			cur = tmp;
		}
	}

	if ((newCab) == NULL)
		(newCab) = pivot;


	(newCabu) = tail;

	return pivot;
}

Tlista ListaDoble::quickSortRecur(Tlista cab, Tlista cabu) {

	if (!cab || cab == cabu)
		return cab;

	Tlista newCab = NULL,  newCabu = NULL;
	Tlista pivot =particion(cab, cabu, newCab, newCabu);

	if (newCab != pivot) {

		Tlista tmp = newCab;
		while (tmp->getSiguiente() != pivot)
			tmp = tmp->getSiguiente();
		tmp->siguiente= NULL;

		newCab = quickSortRecur(newCab, tmp);

		tmp = getTail(newCab);
		tmp->siguiente = pivot;
	}

	pivot->siguiente = quickSortRecur(pivot->getSiguiente(), newCabu);

	return newCab;
}


float ListaDoble::metodoQuickSort() {
	Tlista cab;
	float var = 10;
	cab = primero;
	
	(cab) = quickSortRecur(cab, getTail(cab));

	return var;
}





void ListaDoble::insertarFinal(int id,std::string artista, std::string autor, int anio)
{
	
	Tlista nuevo = new(NodeDoble);
	Tlista  ant = new (NodeDoble);
	nuevo->setDato(id,artista, autor, anio);
	if (primero == NULL)
	{
		nuevo->setSiguente(primero);
		nuevo->setAnterior(NULL);
		primero = nuevo;
	}
	else
	{
		ant = primero;
		while (ant->getSiguiente())
		{
			ant = ant->getSiguiente();
		}
	}
	nuevo->setSiguente(NULL);
	ant->setAnterior(NULL);
	ant->setSiguente(nuevo);
}

void ListaDoble::Mostrar() {
	NodeDoble* aux;

	aux = primero;
	while (aux) {
		std::cout << ": " <<aux->id<<";" <<aux->artista << ";" << aux->autor << ";" << aux->valor << " \n";
		aux = aux->siguiente;
	}
	std::cout << "\n";
}
Tlista ListaDoble::returLis()
{

	Tlista N = primero;
	return N;
}

int ListaDoble::longitudLista()
{
	int cont=0;
	Tlista N=primero;
	
	while (N != NULL)
	{
		N = N->getSiguiente();
		cont++;
	}
	return cont;
}

void ListaDoble::insertarInicio(int id,std::string artista, std::string autor, int anio)
{
	Tlista Nueva = new (NodeDoble);

	if (primero == NULL)
	{
		Nueva->setDato(id,artista, autor, anio);
		Nueva->setAnterior(NULL);
		Nueva->setSiguente(NULL);
	}
	else
	{
		Nueva->setDato(id,artista, autor, anio);
		Nueva->setAnterior(NULL);
		Nueva->setSiguente(primero);
	}
	primero = Nueva;
	return;


}

void ListaDoble::insertarxPosicion(int pos,int id, std::string artistas, std::string autos, int anios)
{
	Tlista nuevo, t;
	t = primero;
	Tlista q = primero;
	int cont = 0;
	int band = 1;
	int op;
	if (primero == NULL)
	{
		//std::cout << "lista vacia se insertara el nuevo nodo " << endl;
	//	nuevo = new(struct nodo);
		nuevo = new(NodeDoble);
		nuevo->setDato(id,artistas, autos, anios);
		nuevo->setAnterior(NULL);
		nuevo->setSiguente(NULL);
		primero = nuevo;
	}

	else
	{

		while (cont != pos - 1 && band == 1)
		{
			//if (q->siguiente != NULL)
			if (q->getSiguiente() != NULL)
			{

				t = q;
				q = q->getSiguiente();
				cont = cont + 1;

			}
			else
			{
				band = 0;

			}
		}
		if (band == 1)
		{
			
		//	{
			if (cont == 0)
			{
				/*
				
				nuevo = new(NodeDoble);
				nuevo->setDato(id,artistas, autos, anios);
				nuevo->setAnterior(NULL);
				nuevo->setSiguente(NULL);
				primero = nuevo;
				*/
				ListaDoble::insertarInicio(id, artistas, autos, anios);

			}
			else
			{
				nuevo = new(NodeDoble);
				nuevo->setDato(id,artistas, autos, anios);
				t->setSiguente(nuevo);
				nuevo->setAnterior(t);
				nuevo->setSiguente(q);
				q->setAnterior(nuevo);

			}
		}



		else
		{
			std::cout << "\n !!-- error no se encontro la posicion " << pos << "\n";
		}

	}
}
void ListaDoble::addFromExcelData(char namFile[30])
{
	FILE* F;
	char* token;
	
	char linea[MAXLINEA];
	F = fopen(namFile, "rt");
	if (F == NULL)
	{
		std::cout << "No se pudo abrir el archivo";
	}

	else {
		std::cout << "EL archivo se abrio correctamente" << "\n";
	}

	int id, anio;
	float v;
	char strs[20];
	char str[20];

	std::string artist;
	std::string autor;

	fgets(linea, MAXLINEA, F);
	while (!feof(F))
	{

		token = strtok(linea, ";");

		id = atoi(token);
		token = strtok(NULL, ";");


		artist = strcpy(strs, token);
		token = strtok(NULL, ";");

		autor = strcpy(str, token);
		token = strtok(NULL, ";");

		anio = atoi(token);
		ListaDoble::insertarFinal(id,artist, autor, anio);
		fgets(linea, MAXLINEA, F);

	}
	fclose(F);

	
}
void ListaDoble::addFromExcelInsert(char namFile[30])
{
	FILE* F;
	char* token;

	char linea[MAXLINEA];
	F = fopen(namFile, "rt");
	if (F == NULL)
	{
		std::cout << "No se pudo abrir el archivo";
	}

	else {
		std::cout << "EL archivo se abrio correctamente" << "\n";
	}

	int id, anio;
	float v;
	char strs[20];
	char str[20];

	std::string artist;
	std::string autor;

	fgets(linea, MAXLINEA, F);
	while (!feof(F))
	{

		token = strtok(linea, ";");

		id = atoi(token);
		token = strtok(NULL, ";");


		artist = strcpy(strs, token);
		token = strtok(NULL, ";");

		autor = strcpy(str, token);
		token = strtok(NULL, ";");

		anio = atoi(token);
		ListaDoble::insertarFinal(id, artist, autor, anio);
		fgets(linea, MAXLINEA, F);

	}
	fclose(F);

	remove(namFile);
}


void ListaDoble::guardarListaENarchivo(char nameFile[20])
{
	std::ofstream(listfile);
	listfile.open(nameFile, std::ios::out | std::ios::app | std::ios::binary);
	Tlista temp;
	temp = primero;
	while (temp != NULL)
	{
		listfile << temp->id<<";"<<temp->artista << ";" << temp->autor << ";" << temp->valor << "\n";
		temp = temp->getSiguiente();
	}

	listfile.close();
	std::cout << "\n\n\t la lista a sido guardada en el archivo " << nameFile;
	//std::cout << "\n\n\t presione una tecla para continuar "; getch();

}

void ListaDoble::Borrar(int Eliminar)
{
	Tlista Aux = new (NodeDoble);
	Aux = primero;
	Tlista Ant = new (NodeDoble);
	while (Aux != NULL)
	{
		if (Eliminar == Aux->getAnio())
		{
			if (Aux = primero)
			{
				primero = primero->getSiguiente();
			}
			else
			{
				Ant->setSiguente(Aux->getSiguiente());

			}
			delete (Aux);
			return;
		}
		Ant = Aux;
		Aux = Aux->getSiguiente();
	}
}

void ListaDoble::insertarluegode(int b, int id,std::string artista, std::string autor, int anio) {

	Tlista p = new(NodeDoble);
	Tlista nuevo = new(NodeDoble);
	p = primero;
	nuevo->setDato(id,artista, autor, anio);
	while (p != NULL)
	{
		if (p->getAnio() == b)
		{
			if (p == primero)
			{
				ListaDoble::insertarFinal(id,artista, autor, anio);
				return;
			}
			p->getSiguiente()->setAnterior(nuevo);
			nuevo->setSiguente(p->getSiguiente());
			p->setSiguente(nuevo);
			nuevo->setAnterior(p);
			return;
		}
		p = p->getSiguiente();
	}
}

void ListaDoble::metodoSelection( Tlista cab) {
	Tlista i,  j,  min;
	int aux;
	
	for (i = cab; i->getSiguiente() != NULL; i = i->getSiguiente()) {
		min = i;
		for (j = i->getSiguiente(); j != NULL; j = j->getSiguiente()) {
			if (j->getAnio() < min->getAnio()) {
				min = j;
			}
		}
		if (min != i) {
			aux = min->getAnio();
			min->valor = i->getAnio();
			i->valor= aux;
		}
	}
	
}


void ListaDoble::ordenarPorFecha()
{
	Tlista p, q;
	p = primero;
	q = primero;
	int aux = 0;
	bool flag = true;

	while (q->siguiente != NULL && flag == true) {
		flag = false;
		p = primero;
		while (p->siguiente != NULL) {
			if (p->getAnio() > p->siguiente->getAnio()) {
				aux = p->getAnio();
				p->valor = p->getSiguiente()->valor;
				p->getSiguiente()->valor = aux;
				
				flag = true;
			}
			p = p->siguiente;
		}
		q = q->siguiente;
	}
}


void ListaDoble::ordenarPorAutor()
{

	Tlista p, q;
	p = primero;
	q = primero;
	std::string aux;
	std::string getAutors;
	std::string getAutorSgt;
	char getAutor[30];
	char getAutorSigte[30];
	bool flag = true;
	
	while (q->siguiente != NULL && flag == true) {
		flag = false;
		p = primero;
		while (p->siguiente != NULL) {
			//getAutor = p->autor;
			getAutors = p->getArtist();
			getAutorSgt = p->siguiente->getArtist();
			if(getAutors.compare(getAutorSgt)>0){
		
				aux = p->artista;
				p->artista = p->siguiente->artista;
				p->siguiente->artista= aux;
			
				flag = true;
			}
			p = p->siguiente;
		}
		q = q->siguiente;
	}


}

void ListaDoble::ordenarPorId()
{
	Tlista p, q;
	p = primero;
	q = primero;
	int aux = 0;
	bool flag = true;

	while (q->siguiente != NULL && flag == true) {
		flag = false;
		p = primero;
		while (p->siguiente != NULL) {
			if (p->getId() > p->siguiente->getId()) {
				aux = p->getId();
				p->id = p->getSiguiente()->id;
				p->getSiguiente()->id = aux;

				flag = true;
			}
			p = p->siguiente;
		}
		q = q->siguiente;
	}

}

String^ ListaDoble::MostrarDatos()
{
	Tlista N = primero;
    String^ Mensaje = "";
	String^ idCon;
	String^ artisCon;
	String^ autorCon;
	String^ anioCon;

	while (N != NULL)
	{
		//MensajeAnio += Convert::ToString(N->getAnio()) + "\n";
		idCon = Convert::ToString(N->getId());
		artisCon = gcnew String(N->getArtist().c_str());
		autorCon = gcnew String(N->getAutor().c_str());
		anioCon = Convert::ToString(N->getAnio()) + "\n";
		//MensajeArtista += Convert::ToString(N->getArtist()) + "\n";
		Mensaje +=idCon+" "+ artisCon + " " + autorCon + " " + anioCon + "\n";
		N = N->getSiguiente();
	}
	return Mensaje;
}

Tlista ListaDoble::middle(Tlista start, Tlista last)
{
	if (start == NULL)
		return NULL;

	Tlista slow = start;
	Tlista fast = start->siguiente;

	while (fast != last)
	{
		fast = fast->siguiente;
		if (fast != last)
		{
			slow = slow->siguiente;
			fast = fast->siguiente;
		}
	}

	return slow;
}

Tlista ListaDoble::binarysearchFecha(int value)
{

	Tlista start = primero;
	Tlista last = NULL;

	do
	{
	
		Tlista mid = middle(start, last);
	
		if (mid == NULL)
			return NULL;


		if (mid->getAnio() == value)
			return mid;


		else if (mid->getAnio() < value)
			start = mid->siguiente;

	
		else
			last = mid;

	} while (last == NULL ||
		last != start);


	return NULL;


}
Tlista ListaDoble::binarysearchId(int value)
{


	Tlista start = primero;
	Tlista last = NULL;

	do
	{
	
		Tlista mid = middle(start, last);

		if (mid == NULL)
			return NULL;

	
		if (mid->getId() == value)
			return mid;

	
		else if (mid->getId() < value)
			start = mid->siguiente;


		else
			last = mid;

	} while (last == NULL ||
		last != start);


	return NULL;


}


