#ifndef LISTA_H
#define LISTA_H
#include "neuronas.h"
#include <string>

template <class T>
class Lista
{
protected:
    Neuronas<T> *cabeza;
public:
    Lista<T>(){cabeza = nullptr;};
    //TDA
    ~Lisa();
    int Longitud(){
        Neuronas<T> *n= cabeza;
        int c = 0;
        while (n!=nullptr){
            c++
            n = n->getSiguiente();
        }
        return c;
    };
    void Insertar(T dato){};
    void Modificar(){};
    void Eliminar(){};
    bool Consultar(){};
};

#endif // LISTA_H
