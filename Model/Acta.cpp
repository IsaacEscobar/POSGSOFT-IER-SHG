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
    cout << "Nombre: " << setNombre(nombre) << "\n";
    cout << "Documento: " << setDocumento(documento) << "\n";
    cout << "Nombre del trabajo: " << setNombreTrabajo(nombreTrabajo) << "\n";
    cout << "Autor: " << setAutor(autor) << "\n";
    cout << "Numero: " << setNumeroTrabajo(numeroTrabajo) << "\n";
    cout << "Tipo: " << setTipoTrabajo(tipoTrabajo) << "\n";
    cout << "Fecha: " << setFecha(fecha) << "\n";
    cout << "Obvservaciones: " << setObvAdicionales(obvAdicionales) << "\n";
    cout << "Identificador: " << setIdentificador(identificador) << "\n";
    cout << "Calificaciones: " << setCalificaciones(calificaciones << "\n";
}

void Acta::mostrarDirectores()
{
    cout << "Nombre: " << setNombre(nombre) << "\n";
    cout << "Documento: " << setDocumento(documento) << "\n";
    cout << "Nombre del trabajo: " << setNombreTrabajo(nombreTrabajo) << "\n";
    cout << "Autor: " << setAutor(autor) << "\n";
    cout << "Numero: " << setNumeroTrabajo(numeroTrabajo) << "\n";
    cout << "Tipo: " << setTipoTrabajo(tipoTrabajo) << "\n";
    cout << "Fecha: " << setFecha(fecha) << "\n";
    cout << "Obvservaciones: " << setObvAdicionales(obvAdicionales) << "\n";
    cout << "Condiciones: " << setCondiciones(condiciones) << "\n";
    cout << "Identificador: " << setIdentificador(identificador) << "\n";
    cout << "Enunciado: " << setEnunciado(enunciado) << "\n";
    cout << "Comentarios: " << setComentarios(comentarios) << "\n";
    cout << "Ponderacion: " << setPonderacion(ponderacion) << "\n";
    cout << "Calificaciones: " << setCalificaciones(calificaciones << "\n";
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

// array<Persona, 2> Acta::getJurados()
// {
//     return jurados;
// }

// array<Persona, 2> Acta::getDirectores()
// {
//     return directores;
// }