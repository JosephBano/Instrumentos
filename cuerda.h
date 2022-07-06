#ifndef CUERDA_H
#define CUERDA_H
#include "instrumento.h"

class CuerdaPiano : public Instrumento
{
    bool vertical_cola;
public:
    CuerdaPiano(string nombre, int material, float costo, bool vertical_cola);
};

class CuerdaGuitaViolin : public Instrumento
{
    bool guitarra_violin;
    bool electrico_sino;
public:
    CuerdaGuitaViolin(string nombre, int material, float costo, bool guitarra_violin, bool electrico_sino);
};

#endif // CUERDA_H
