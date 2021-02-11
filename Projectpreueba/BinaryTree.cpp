#include "BinaryTree.h"
#include "ListaDoble.h"
char namFile[30]="arbolesIn.csv";
char namsFile[30] = "arbolesPos.csv";
int numNodos = 0; // nummero de nodos del arbol Tree
int numK = 0, k;     //  nodos menores que un numero k ingresado
#define MAXLINEA 255
using namespace System;
ListaDoble list;

BinaryTree::~BinaryTree()
{

	Tree aux;

	while (root)
	{
		aux = root;
		root = root->left;
		delete aux;
	}

	p= NULL;
}


void NodeArbol::setDato(int id,std::string artista, std::string autor, int Dato)
{
    this->id = id;
	this->artista=artista;
	this->autor=autor;
	this->valor=Dato;
	return;
}

int NodeArbol::getId() { return id; }
std::string NodeArbol::getArtist() { return artista; }
std::string NodeArbol::getAutor() { return autor; }
int NodeArbol::getAnio() { return valor; }

void NodeArbol::setLeft(NodeArbol* l = NULL)
{
	left = l;
	return;
}
void NodeArbol::setRight(NodeArbol* r = NULL)
{
	right = r;
	return;
}


Tree NodeArbol::getLeft() { return left; }
Tree NodeArbol::getRight() { return right; }



void BinaryTree::insertar(int ids, std::string artist, std::string autor, int anio)
{


    Tree nuevo = new(NodeArbol);
    nuevo->setDato(ids, artist, autor, anio);
    nuevo->setRight(NULL);
    nuevo->setLeft(NULL);
    if (root == NULL) {
        root = nuevo;//Nodo raiz
    }
    else {
      
        Tree anterior, reco;
     
        anterior = NULL;
        reco = root;
        while (reco != NULL) {
            anterior = reco;
            if (ids< reco->id)
                reco = reco->getLeft();
            else
                reco = reco->getRight();
        }
        if (ids < anterior->id)
            anterior->left = nuevo;
        else
            anterior->right = nuevo;
    }
}

void BinaryTree::TreeAddFromExcelData(char nameFile[30])
{
    FILE* F;
    char* token;

    char linea[MAXLINEA];
    F = fopen(nameFile, "rt");
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
        BinaryTree::insertaNodo(id, artist, autor, anio);
      
        fgets(linea, MAXLINEA, F);

    }
    fclose(F);

}
void BinaryTree::guardarArbolenArchivo(Tree arbol,char nameFile[30])
{
    std::ofstream(treefile);
    treefile.open(nameFile, std::ios::out | std::ios::app | std::ios::binary);
   // Tree temp;

    //temp = root;
    /*
    if (arbol == NULL) {
        return;
    }
    else {

     //   inOrden(arbol->left);
        
        guardarArbolenArchivo(arbol->left, nameFile);
        treefile << arbol->id << ";" << arbol->artista << ";" << arbol->autor << ";" << arbol->valor << " \n";
      // inOrden(arbol->right);
       guardarArbolenArchivo(arbol->right, nameFile);
        
    }
    */




   // treefile.close();
  //  std::cout << "\n\n\t el arbol a sido guardado en el archivo " << nameFile;



    /*

    while (temp != NULL)
    {
        listfile << temp->id << ";" << temp->artista << ";" << temp->autor << ";" << temp->valor << "\n";
       // temp = temp->getSiguiente();
    }

    listfile.close();
    std::cout << "\n\n\t la lista a sido guardada en el archivo " << nameFile;
    */

    if (arbol!=NULL) {
        //  writenode(node->left);
        guardarArbolenArchivo(arbol->left, nameFile);
        treefile << arbol->getId() << ";" << arbol->artista << ";" << arbol->autor << ";" << arbol->valor << " \n";
        guardarArbolenArchivo(arbol->right, nameFile);
     
    }
   
     

}

void BinaryTree::mostrar()
{
    Tree ps;
    ps = root;
    while (ps != NULL)
    {
        std::cout << ": " << ps->artista << ";" << ps->autor << ";" << ps->valor << " \n";
        ps = ps->left;
    }

}
void BinaryTree::recorrerxNivel()
{
  
}



void NodeArbol::insertaBinario(int ids, std::string artist, std::string autor, int anio)
{

    if (ids <id) {
        if (left == NULL) {
           
            left = new(NodeArbol);
            left->setDato(ids, artist, autor, anio);
            left->setRight(NULL);
            left->setLeft(NULL);
        }
        else {
         
            left->insertaBinario(ids, artist, autor, anio);
        }
        }
    
    else {
        if (right == NULL) {
            right = new(NodeArbol);
            right->setDato(ids, artist, autor, anio);
            right->setRight(NULL);
            right->setLeft(NULL);
        }
        else {
            right->insertaBinario( ids,  artist, autor,anio);

        }
    }
}

void BinaryTree::insertaNodo(int ids, std::string artist, std::string autor, int anio)
{
    if (root == NULL) {
       // root = new NodoBinario(num);
        root = new(NodeArbol);
        root->setDato(ids, artist, autor, anio);
        root->setRight(NULL);
        root->setLeft(NULL);
    }
    else {
        root->insertaBinario(ids, artist, autor, anio);
    }
}



Tree BinaryTree::returnRaiz()
{
    //Tree raiz;
   // raiz = root;
    return root;
}

int BinaryTree::cont(Tree arbol)
{
    if (arbol != NULL)
        return 1 + cont((arbol)->left) + cont((arbol)->right);
    else
        return 0;
}

void BinaryTree::verArbol(Tree arbol, int n)
{
    if (arbol == NULL)
        return;
    verArbol(arbol->getRight(), n + 1);

    for (int i = 0; i < n; i++)
       std:: cout << "   ";

    std::cout << arbol->getId()<< "\n";
    numNodos++;

    verArbol(arbol->getLeft(), n + 1);
}


void BinaryTree::preOrden(Tree arbol)
{
    
    if (arbol == NULL) {
        return;
    }
    else {
        std::cout << ": " << arbol->id << ";" << arbol->artista << ";" << arbol->autor << ";" << arbol->valor << " \n";
        preOrden(arbol->left);
        preOrden(arbol->right);
    }
    
   // list.Mostrar();
}

void BinaryTree::preOrder(Tree arbol, String^& Texto)
{
    String^ idCon;
    String^ artisCon;
    String^ autorCon;
    String^ anioCon;
    if (arbol != NULL) {
   
        idCon = Convert::ToString(arbol->id);
        artisCon = gcnew String(arbol->artista.c_str());
        autorCon = gcnew String(arbol->autor.c_str());
        anioCon = Convert::ToString(arbol->valor + "\n");
 
        Texto += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";
        preOrder(arbol->left, Texto);
        preOrder(arbol->right, Texto);
    

    }
  
}

void BinaryTree::inOrder(Tree arbol, String^& Texto)
{
    String^ idCon;
    String^ artisCon;
    String^ autorCon;
    String^ anioCon;
    if (arbol != NULL) {
        idCon = Convert::ToString(arbol->id);
        artisCon = gcnew String(arbol->artista.c_str());
        autorCon = gcnew String(arbol->autor.c_str());
        anioCon = Convert::ToString(arbol->valor + "\n");
     
        inOrder(arbol->left, Texto);
        Texto += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";
        inOrder(arbol->right, Texto);


    }

}
void BinaryTree::postOrder(Tree arbol, String^& Texto)
{
    String^ idCon;
    String^ artisCon;
    String^ autorCon;
    String^ anioCon;

    if (arbol != NULL) {
        idCon = Convert::ToString(arbol->id);
        artisCon = gcnew String(arbol->artista.c_str());
        autorCon = gcnew String(arbol->autor.c_str());
        anioCon = Convert::ToString(arbol->valor + "\n");

       
        postOrder(arbol->left, Texto);
        preOrder(arbol->right, Texto);
        Texto += idCon + " " + artisCon + " " + autorCon + " " + anioCon + "\n";

    }

}

void BinaryTree::inOrden(Tree arbol)
{
 
  //  std::ofstream(treefile);
    //treefile.open(namFile, std::ios::out | std::ios::app | std::ios::binary);
    // Tree temp;
    if (arbol == NULL) {
        return;
    }
    else {
        
        inOrden(arbol->left);
   

        std::cout << ": " << arbol->id << ";" << arbol->artista << ";" << arbol->autor << ";" << arbol->valor << " \n";
      //  guardarArbolenArchivo(arbol, "arboles.csv");
       // treefile << arbol->id << ";" << arbol->artista << ";" << arbol->autor << ";" << arbol->valor << " \n";
        inOrden(arbol->right);
    }
}
void BinaryTree::postOrden(Tree arbol)
{
    std::ofstream(treefile);
    treefile.open(namsFile, std::ios::out | std::ios::app | std::ios::binary);
    if (arbol == NULL) {
        return;
    }
    else {

        postOrden(arbol->left);
        postOrden(arbol->right);
        std::cout << ": " << arbol->id << ";" << arbol->artista << ";" << arbol->autor << ";" << arbol->valor << " \n";
        treefile << arbol->id << ";" << arbol->artista << ";" << arbol->autor << ";" << arbol->valor << " \n";
    
    }

}

