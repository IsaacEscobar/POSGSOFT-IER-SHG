#ifndef JURADO_H
#define JURADO_H

// incluimos librerias necesarias  para ejecutar nuestras funciones 
// esperadas por la clase
#include <iostream>
#include <stdlib.h>
#include <map>
#include <iterator>
#include "Persona.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::map;
using std::iterator;

// jurado hereda de la clase persona sus atributos de identificacion
class Jurado: public Persona
{
	public:
		Jurado();
		Jurado(string nombre, int documento);

};

#endif // JURADO_H
