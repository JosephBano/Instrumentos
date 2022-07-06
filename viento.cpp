#include "viento.h"

Viento::Viento(string nombre, int material, float costo, int clasificacion)
       : Instrumento(nombre, material, costo), clasificacion(clasificacion)
{

}
