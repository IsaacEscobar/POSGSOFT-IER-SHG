#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

#include <iostream>
#include <stdlib.h>
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
        void crearAsistente();
}
#endif // UNIVERSIDAD_H