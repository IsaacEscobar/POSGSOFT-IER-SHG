#include <iostream>
#include "Criterio.h"

// constructor por defecto
Criterio::Criterio()
    
{
	this->identificador = identificador;
	this->enunciado = enunciado;
	this->ponderacion = ponderacion;
	this->comentarios = comentarios;
	this->calificaciones = calificaciones;	
}


void Criterio::mostrarCriterios()
{
    cout << "identificador" << identificador << "\n";
    cout << "enunciado" << enunciado << "\n";
    cout << "ponderacion" << ponderacion << "\n";
    cout << "comentarios" << comentarios << "\n";
    cout << "calificaciones" << calificaciones << "\n";
}

void Criterio::setIdentificador()
{
	this->identificador = identificador;
}

int Criterio::getIdentificador()
{
	return identificador;
}

void Criterio::setEnunciado()
{
	this->enunciado = enunciado;
}

string Criterio::getEnunciado()
{
	return enunciado;
}

void Criterio::setPonderacion()
{
	this->ponderacion = ponderacion;
}

int Criterio::getPonderacion()
{
	return ponderacion;
}

void Criterio::setComentarios()
{
	this->comentarios = comentarios;
}

string Criterio::getComentarios()
{
	return comentarios;
}

void Criterio::setCalificaciones()
{
	this->calificaciones = calificaciones;
}

float Criterio::getCalificaciones()
{
	return calificaciones;
}

