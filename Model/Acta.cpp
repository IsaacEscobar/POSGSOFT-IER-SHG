#include "Acta.h"
#include "Director.h"
#include "Jurado.h"
#include "Criterio.h"

Acta::Acta()
{
    criterios[1] = Criterio(1, "Buena ortografia", 0.2, "", 0.0);
    criterios[2] = Criterio(2, "Cumple los requisitos exigidos", 0.2, "", 0.0);
    criterios[3] = Criterio(3, "Demuestra una buena sustentacion", 0.1, "", 0.0);
    criterios[4] = Criterio(4, "Elabora de manera adecuada el tema asignado", 0.05, "", 0.0);
    criterios[5] = Criterio(5, "Manejo de fuentes de manera correcta", 0.2, "", 0.0);
    criterios[6] = Criterio(6, "Utiliza de manera correcta los recursos visuales y textuales", 
                                  0.1, "", 0.0);
    criterios[7] = Criterio(7, "Presenta un esquema completo", 0.1, "", 0.0);
    criterios[8] = Criterio(8, "Entrega en el plazo asignado", 0.05, "", 0.0);
}

void Acta::mostrarActa()
{
    cout << "Nombre trabajo: " << nombreTrabajo << "\n";
    cout << "Autor: " << autor << "\n";
    cout << "Acta No." << numeroTrabajo << "\n";
    switch(tipoTrabajo)
    {
        case 1: cout << "Tipo: Investigacion\n";
            break;
        case 2: cout << "Tipo: Aplicado\n";
            break;
    }
    cout << "Fecha: " << fecha << "\n";
    cout << "Jurado 1: " << jurados[0] << "\n";
    cout << "Jurado 2: " << jurados[2] << "\n";
    cout << "Director: " << directores[0] << "\n";
    cout << "Codirector: " << directores[2] << "\n";
    cout << "Obvservaciones: " << obvAdicionales << "\n";
    cout << "Condiciones: " << condiciones << "\n";
    cout << "Calificaciones:\n";
    for(map<int, Criterio>::iterator pCriterio = criterios.begin(); pCriterio != criterios.end(); pCriterio++)
    {
        Criterio criterioActual = pCriterio->second;
        cout << "Criterio No." << criterioActual.getIdentificador() 
        << "\nEnunciado: " << criterioActual.getEnunciado()
        << "\nPonderacion: " << criterioActual.getPonderacion()
        << "\nCalificacion: " << criterioActual.getCalificaciones()
        << "Comentarios: " << criterioActual.getComentarios() << "\n";
    }
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

int Acta::getTipoTrabajo()
{
    return tipoTrabajo;
}

void Acta::setTipoTrabajo(int tipoTrabajo)
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