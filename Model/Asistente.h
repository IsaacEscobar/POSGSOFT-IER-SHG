#ifndef ASISTENTE_H
#define ASISTENTE_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Persona.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Asistente: public Persona
{
    private:
        vector<int> actas;
    public:
        Asistente();
        Asistente(string nombre, int documento);
        void generarActa(int numeroTrabajo, Acta* acta);
        void mostrarNumActasPoseidas();
};

#endif // ASISTENTE_H