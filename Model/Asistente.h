#ifndef ASISTENTE_H
#define ASISTENTE_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include "Persona.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ofstream;
using std::ios;

class Asistente: public Persona
{
    private:
        vector<int> actas;
    public:
        Asistente();
        Asistente(string nombre, int documento);
        vector<int> getActasAsistente();
        void generarActa(int numeroTrabajo, Acta* acta);
        void mostrarNumActasPoseidas();
        void writeCSV(string archivo);
};

#endif // ASISTENTE_H