#include "Jurado.h"


Jurado::Jurado()
{
    
}

Jurado::Jurado(string nombre, int documento)
{
	this->nombre = nombre;
	this->documento = documento;

}

void Jurado::exportarActa(Acta acta)
{
    ofstream archivo;
    archivo.open("reporteActa.txt");
    archivo << "Nombre Trabajo: " << acta.getNombreTrabajo(); "\n";
    archivo << "Jurado 1: " << acta.getJurados()[0] << "-" << acta.getJurados()[0] << "\n";
    archivo << "Jurado 1: " << acta.getJurados()[0] << "-" << acta.getJurados()[1] << "\n";
    archivo << "Jurado 2: " << acta.getJurados()[1] << "-" << acta.getJurados()[0] << "\n";
    archivo << "Jurado 2: " << acta.getJurados()[1] << "-" << acta.getJurados()[1] << "\n";
    archivo << "Director: " << acta.getDirectores()[0] << "-" << acta.getDirectores()[1] << "\n";
    archivo << "Codirector: " << acta.getDirectores()[2] << "-" << acta.getDirectores()[3] << "\n";
    archivo << "Autor: " << acta.getAutor() << "\n";
    archivo << "Tipo de trabajo: " << acta.getTipoTrabajo() << "\n";
    archivo << "Numero de trabajo: " << acta.getNumeroTrabajo() << "\n";
    archivo << "Fecha: " << acta.getFecha() << "\n";
    archivo << "Tipo de trabajo: " << acta.getTipoTrabajo() << "\n";
    archivo << "Observaciones adicionales: " << acta.getObvAdicionales() << "\n";
    archivo << "Tipo de trabajo: " << acta.getTipoTrabajo() << "\n";
    archivo << "Condiciones: " << acta.getCondiciones() << "\n";
    archivo.close();
}
