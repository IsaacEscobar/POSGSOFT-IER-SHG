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
        Acta generarActa(int numeroTrabajo);
        void mostrarNumActasPoseidas();
};

#endif // ASISTENTE_H