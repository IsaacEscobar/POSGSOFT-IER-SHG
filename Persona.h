#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>


//librerias que incluimos 
using std::cout;
using std::cin;
using std::cout;
using std::string;


class Persona
{

protected:
	string nombre;
	string documento;

public:
    Persona();
    Persona(string nombre);
    Persona(string documento);

    // Gets and sets

	string getNombre();
	string setNombre();
	string getDocumento();
	string setDocumento();
};

#endif // PERSONA_H
