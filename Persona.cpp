#include <iostream>
#include "Persona.h"

// constructor por defecto
Persona::Persona()
    
{
	this->nombre = nombre;
	this->documento = documento;	
}


void Persona::mostrarInformacion()
{
    cout << "nombre" << nombre << "\n";
    cout << documento << documento << "\n";
}

