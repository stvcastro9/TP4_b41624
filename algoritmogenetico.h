#ifndef ALGORITMOGENETICO_H
#define ALGORITMOGENETICO_H

#include <stdlib.h>
using namespace std;
class AlgoritmoGenetico
{
public:
    AlgoritmoGenetico(){
        for(int i = 0; i<10000;i++){
            cruzar();
            mutar();
            calcularAptitud();
            ordenar();
            seleccionar();
        }
    }
    //AlgoritmoGenetico();
    void cruzar();			// TOMAR DOS Y Q HAGAN CHUQUCHUQU
    void mutar();		// TOMAR UN CHAVALO AL AZAR Y MUTARLO
    float calcularAptitud(); // AUTOEXPLICATORIO
    void seleccionar();
    void ordenar();// DEFINIR CUÁNTOS, PASAN ALGUNOS CHAPAS
    int getCantidadIndividuos();
    int numeroAleatorio(int cantidadIndividuos){return rand() %cantidadIndividuos + 1;}//aleatorio a mutar

};

#endif // ALGORITMOGENETICO_H
