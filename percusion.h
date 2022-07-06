#ifndef PERCUSION_H
#define PERCUSION_H
#include "instrumento.h"

class Percusion : public Instrumento
{   int altura;
    bool altoDeterminado;
public:
    Percusion(string nombre, int material, float costo, bool altoDeterminado);
    void definirAltura(bool altoDeterminado);
};

#endif // PERCUSION_H
