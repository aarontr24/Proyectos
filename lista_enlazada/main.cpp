#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Lista a;
    a.insertar(45);
    a.insertar(77);
    a.insertar(67);
    a.insertar(46);
    a.insertar(27);
    a.print();
    cout<<endl;
    a.insertarEn(12,6);
    a.print();

    //cout << "Hello world!" << endl;
    return 0;
}
