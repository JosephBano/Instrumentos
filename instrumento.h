#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H
#include <iostream>
using namespace std;

class Instrumento
{
    string nombre;
    int material;
    int tipoInstrumento;
    float costo;
    static float sumaPromedio;
    static int contador;
public:
    Instrumento(string nombre, int material, float costo);
    string listar();
    string tipoMaterial();
    void sumaCostos(float costo);
};

#endif // INSTRUMENTO_H
