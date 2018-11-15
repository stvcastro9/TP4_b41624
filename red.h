#ifndef RED_H
#define RED_H

#include "Lista.h"
class Red
{
    Lista Capas ;
    RedNeuronal() ;
    AgregarCapa(int cNeuronas) ;
    Categoría clasificar(dato) ;
    entrenar(datos) ;
public:
    Red();
};

#endif // RED_H
