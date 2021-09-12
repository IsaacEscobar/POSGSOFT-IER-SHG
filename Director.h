#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <iostream>
#include <stdlib.h>
#include <map>
#include <algorithm>
#include <iterator>
#include "Persona.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::map;
using std::find;
using std::iterator;

class Director: public Persona
{
	public:
		Director();
		void modificarCriterio(Acta acta);
		void crearCriterio(Acta acta);
		void mostrarCriterio();
};

#endif // DIRECTOR_H
