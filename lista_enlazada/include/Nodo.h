#ifndef NODO_H
#define NODO_H

#include <iostream>

class Nodo
{
    public:
        Nodo(int x){this->valor=x; this->sgte=NULL;};
        virtual ~Nodo();
        friend class Lista;

    protected:

    private:
    int valor;
    Nodo *sgte;
};

#endif // NODO_H
