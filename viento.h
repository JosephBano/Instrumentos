#ifndef VIENTO_H
#define VIENTO_H
#include "instrumento.h"

class Viento : public Instrumento
{
    int clasificacion;
public:
    Viento(string nombre, int material, float costo, int clasificacion);
};

#endif // VIENTO_H
