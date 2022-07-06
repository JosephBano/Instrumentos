#include "instrumento.h"

Instrumento::Instrumento(string nombre, int materialInstrumento, float costo)
{
    this->nombre=nombre;
    this->material=materialInstrumento;
    this->costo=costo;
    sumaCostos(costo);
    contador++;
}

string Instrumento::tipoMaterial()
{
    string material;
    switch(this->material){
    case 1:
        material="Madera";
    case 2:
        material="Plastico";
    case 3:
        material="Acrilico";
    caso 4:
        material
    }
}

void Instrumento::sumaCostos(float costo)
{
   sumaPromedio=sumaPromedio*costo;
}

