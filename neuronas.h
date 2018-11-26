#ifndef NEURONAS_H
#define NEURONAS_H
#include <stdlib.h>     /* srand, rand */
#include <random>
template <class T>
class Neurona
{
    Neurona();
    int cantiConexiones();
    float carga;
    float umbral;
    Lista conexiones;
    AgregarConexion(neurona, peso) ;
    Carga aplicarCarga(Carga carga) ;

public:
    Neurona();
};

template <class T>
class Lista
{
protected:
    Neurona<T> *cabeza;
public:
    Lista<T>(){cabeza = nullptr;}
    //TDA
    ~Lista();
    int Longitud(){
        Neurona<T> *n= cabeza;
        int c = 0;
        while (n!=nullptr){
            c++;
            n = n->getSiguiente();
        }
        return c;
    }
    void Insertar(T dato){}
    void Modificar(){}
    void Eliminar(){}
    bool Consultar(){}
};

class Capa
{
    int cantiNeuronas();
    Lista neuronas ;
    AgregarNeurona(neurona) ;
public:
    Capas();
};

class Conexion
{
    Neurona r ;
    float peso ;
    Conexion(neurona, peso);
public:
    Conexion();
};

class Red
{
    Red(int cantientradas){
        for(int m = 0; m < cantientradas+1; m++){
            capas.Insertar(numeroAleatorio());
        }

        for(int i = 0; i < cantiCapas(); i++){
            for(int j = 0; i < Capas.cantiNeuronas(); j++){
             for(int k = 0; k < Neuronas.cantiConexiones(); k++){

                }
            }
        }
    }
    Lista capas ;
    int cantiCapas();
    Red();
    AgregarCapa(int cNeuronas) ;
    Categoría clasificar(dato) ;
    entrenar(datos) ;
    int numeroAleatorio(int cantNeuronas){return rand() ;}//aleatorio
public:
    Red();
};
#endif // NEURONAS_H
