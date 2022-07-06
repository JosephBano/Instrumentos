#include "cuerda.h"

CuerdaPiano::CuerdaPiano(string nombre, int materialInstrumento, float costo,  bool vertical_cola)
            : Instrumento(nombre, materialInstrumento, costo), vertical_cola(vertical_cola)
{

}

CuerdaGuitaViolin::CuerdaGuitaViolin(string nombre, int materialInstrumento, float costo,bool guitarra_violin,bool electrico_sino)
            : Instrumento(nombre, materialInstrumento, costo), guitarra_violin(guitarra_violin), electrico_sino(electrico_sino)
{

}
