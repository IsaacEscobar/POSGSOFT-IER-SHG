#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

#include <iostream>
#include <stdlib.h>
#include <ios>
#include <limits>
#include <map>
#include <iterator>
#include "Acta.h"
#include "Asistente.h"
#include "Jurado.h"
#include "Director.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::to_string;
using std::map;
using std::iterator;

class Universidad 
{
    private:
        map<int, Acta> actas;
        map<int, Asistente> asistentes;
        map<int, Jurado> jurados;
        map<int, Director> directores;
    public:
        Universidad();
        void mostrarReportes();
        void crearAsistente();
        void crearJurado();
        void crearDirector();
        void ingresarComoAsistente();
        void ingresarComoJurado();
        void ingresarComoDirector();
        void menuAsistente(Asistente* asistente);
        void menuJurado(Jurado* jurado);
        void menuDirector(Director* director);
        void generarActa(Asistente *asistente);
        void verificarJurados(Acta *acta);
        void verificarDirectores(Acta *acta);
};

#endif // UNIVERSIDAD_H
