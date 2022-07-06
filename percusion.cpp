#include "percusion.h"


Percusion::Percusion(string nombre, int materialInstrumento, float costo, bool altoDeterminado)
          : Instrumento(nombre, materialInstrumento, costo), altoDeterminado(altoDeterminado)
{
    definirAltura(altoDeterminado);
}

void Percusion::definirAltura(bool altoDeterminado)
{
    if (altoDeterminado){
        cout << "Cual es la altura del insturmento: ";
        cin << this->altura;
    }else{
        this->altura=0.0;
    }
}
