#ifndef JURADO_H
#define JURADO_H

#include <iostream>
#include <stdlib.h>
#include <map>
#include <iterator>
#include "Persona.h"
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::map;
using std::iterator;

class Jurado: public Persona
{
	public:
		Jurado();
		void calificarActa(Acta acta);
		void exportarActa(Acta acta);
		void exportarActa();
};

#endif // JURADO_H