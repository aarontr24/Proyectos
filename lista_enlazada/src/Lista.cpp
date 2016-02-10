#include "Lista.h"
#include <iostream>

using namespace std;

Lista::~Lista()
{
    //dtor
}

void Lista::insertar(int x)
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

void Lista::print()
{
    Nodo *temp = this->inicio;
    while(temp)
    {
        cout<<temp->valor<<"->";
        temp=temp->sgte;
    }
}

void Lista::modNodo(int v, int x)
{
    Nodo *temp = this->inicio;
    for(int i=1; i<x; i++)
    {
        temp=temp->sgte;
    }
    temp->valor=v;
}

void Lista::insertarEn(int v, int x)
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
