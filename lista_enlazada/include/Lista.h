#ifndef LISTA_H
#define LISTA_H

#include <Nodo.h>

class Lista
{
    public:
        Lista(){this->items=0;};
        virtual ~Lista();

        void insertar(int);
        void print();
        void modNodo(int,int); //modifica el valor de un nodo
        void insertarEn(int,int); //inserta un nodo en una posicion indicada de la lista
        bool buscar(int);
        void invertir();
        int getActual();
        int getInicio();

    protected:

    private:
    Nodo *inicio, *actual;
    int items;
};

#endif // LISTA_H
