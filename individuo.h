#ifndef INDIVIDUO_H
#define INDIVIDUO_H


class Individuo
{

public:
    int aptitud();
    Individuo(){aptitud = 0;}
    Individuo(int num) {aptitud=num; }
    int GetAptitud(){return aptitud();}
    void SetAptitud(int num){this->aptitud = num;}


};

#endif // INDIVIDUO_H
