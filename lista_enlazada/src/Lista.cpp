#include "Lista.h"
#include <iostream>

using namespace std;

Lista::~Lista()
{
    //dtor
}

void Lista::insertar(int x) //Inserta un nodo al final de la lista enlazada
{
    Nodo *nuevo = new Nodo(x);
    if(this->items==0){
        this->inicio=nuevo;
        this->actual=nuevo;
        this->items++;
    }else{
        this->actual->sgte=nuevo;
        this->actual=nuevo;
        this->items++;
    }
}

void Lista::print() //Imprime la lista enlazada
{
    Nodo *temp = this->inicio;
    while(temp)
    {
        cout<<temp->valor<<"->";
        temp=temp->sgte;
    }
}

void Lista::modNodo(int v, int x) //modifica la valor de un nodo de la lista
{
    Nodo *temp = this->inicio;
    for(int i=1; i<x; i++)
    {
        temp=temp->sgte;
    }
    temp->valor=v;
}

void Lista::insertarEn(int v, int x) //Inserta un nodo en una posicion indicada de la lista
{
    Nodo *nuevo = new Nodo(v);
    Nodo *atras = this->inicio;
    Nodo *temp;
    if(x==1)
    {
        nuevo->sgte=this->inicio;
        this->inicio=nuevo;
        this->items++;
    }
    else if(x>this->items)
    {
        this->actual->sgte=nuevo;
        this->actual=nuevo;
        this->items++;
    }
    else
    {
        for(int i=2; i<x;i++)
        {
            atras=atras->sgte;
        }
        temp=atras->sgte;
        atras->sgte=nuevo;
        nuevo->sgte=temp;
        this->items++;
    }
}

bool Lista::buscar(int v)
{
    Nodo *temp = this->inicio;
    while(temp)
    {
        if(temp->valor==v)
            return true;
        temp=temp->sgte;
    }
    return false;
}

void Lista::invertir() //invierte la lista enlazada
{
    Nodo *elem = this->inicio;
    Nodo *elem2 = elem->sgte;
    Nodo *temp;
    elem->sgte = NULL;
    this->actual = elem;
    while(elem2)
    {
        temp = elem2->sgte;
        elem2->sgte = elem;
        elem = elem2;
        elem2 = temp;
    }
    this->inicio=elem;
}

int Lista::getActual() //Devuelve el valor del nodo Actual
{
    int a=this->actual->valor;
    return a;
}

int Lista::getInicio() //Devuelve el valor del nodo Inicio
{
    int a=this->inicio->valor;
    return a;
}
