#include "Persona.h"
// clase padre
// constructor por defecto
Persona::Persona()
{
		
}

void Persona::mostrarInformacion(string nombre, int documento)
{
    cout << "nombre" << nombre << "\n";
    cout << documento << documento << "\n";
}

void Persona::setNombre(string nombre)
{
	this->nombre = nombre;
}

string Persona::getNombre()
{
	return nombre;
}

void Persona::setDocumento(int documento)
{
	this->documento = documento;
}

int Persona::getDocumento()
{
	return documento;
}
