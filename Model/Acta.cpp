#include "Acta.h"
#include "Director.h"
#include "Jurado.h"
#include "Criterio.h"

Acta::Acta()
{

}

void Acta::mostrarActa()
{
    cout << "Nombre: " << nombreTrabajo << "\n";
    cout << "Autor: " << autor << "\n";
    cout << "Numero: " << numeroTrabajo << "\n";
    cout << "Tipo: " << tipoTrabajo << "\n";
    cout << "Fecha: " << fecha << "\n";
    cout << "Obvservaciones: " << obvAdicionales << "\n";
    cout << "Condiciones: " << condiciones << "\n";
}

void Acta::mostrarJurados()
{
   map<int, Acta>:: iterator i ;
   map<int, Acta> listaJurados;
   for(i = listaJurados.begin(); i != listaJurados.end(); i++)
        cout << i->first << " " << i->second.getJurados() << endl;

}

void Acta::mostrarDirectores()
{
    map<int, Acta>:: iterator i ;
    map<int, Acta> listaDirectores;
    for(i = listaDirectores.begin(); i != listaDirectores.end(); i++)
        cout << i->first << " " << i->second.getDirectores() << endl;
}

string Acta::getNombreTrabajo() 
{
    return nombreTrabajo;
}

void Acta::setNombreTrabajo(string nombreTrabajo) 
{
    this->nombreTrabajo = nombreTrabajo;
}

string Acta::getAutor() 
{
    return autor;
}

void Acta::setAutor(string autor) 
{
    this->autor = autor;
}

int Acta::getNumeroTrabajo()
{
    return numeroTrabajo;
}

void Acta::setNumeroTrabajo(int numeroTrabajo)
{
    this->numeroTrabajo = numeroTrabajo;
}

string Acta::getTipoTrabajo()
{
    return tipoTrabajo;
}

void Acta::setTipoTrabajo(string tipoTrabajo)
{
    this->tipoTrabajo = tipoTrabajo;
}

string Acta::getFecha()
{
    return fecha;
}

void Acta::setFecha(string fecha)
{
    this->fecha = fecha;
}

string Acta::getObvAdicionales()
{
    return obvAdicionales;
}

void Acta::setObvAdicionales(string obvAdicionales)
{
    this->obvAdicionales = obvAdicionales;
}

string Acta::getCondiciones()
{
    return condiciones;
}

void Acta::setCondiciones(string condiciones)
{
    this->condiciones = condiciones;
}

map<int, Criterio> Acta::getCriterios()
{
    return criterios;
}

string* Acta::getJurados()
{
    return jurados;
}

string* Acta::getDirectores()
{
    return directores;
}