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
        void insertarEn(int,int);

    protected:

    private:
    Nodo *inicio, *actual;
    int items;
};

#endif // LISTA_H
