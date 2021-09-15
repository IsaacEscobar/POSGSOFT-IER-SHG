#include "Jurado.h"

// hereda atributos de la clase Padre que es Persona 
Jurado::Jurado()
{
    
}

Jurado::Jurado(string nombre, int documento)
{
	this->nombre = nombre;
	this->documento = documento;

}
