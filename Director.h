#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <iostream>
#include <stdlib.h>
#include <map>
#include <iterator>
#include "Acta.h"
#include "Director.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::map;
using std::iterator;

class Director
{
	public:
		Director();
		void modificarCriterio(Acta);
		void crearCriterio(Acta);
		void mostrarCriterio();
}

#endif // DIRECTOR_H
