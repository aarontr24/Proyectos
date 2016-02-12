#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Lista a;
    a.insertar(45);
    //a.insertar(77);
    //a.insertar(67);
    //a.insertar(46);
    //a.insertar(27);
    //a.insertar(57);
    //a.insertar(97);
    //a.insertar(24);
    //a.print();
    a.insertarEn(15,3);
    a.insertarEn(36,3);
    a.insertarEn(48,3);
    a.insertarEn(99,3);
    //cout<<endl;
    a.print();
    a.invertir();
    cout<<endl;
    a.print();
    cout<<endl;
    cout<<a.getActual();
    cout<<endl;
    cout<<a.getInicio();
    //cout << "Hello world!" << endl;
    return 0;
}
