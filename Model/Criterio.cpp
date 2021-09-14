#include "Criterio.h"
#include "Acta.h"

// constructor por defecto
Criterio::Criterio() 
{

}

Criterio::Criterio(int identificador, string enunciado, float ponderacion, 
					string comentarios, float calificaciones)
{
	this->identificador = identificador;
	this->enunciado = enunciado;
	this->ponderacion = ponderacion;
	this->comentarios = comentarios;
	this->calificaciones = calificaciones;	
}

void Criterio::mostrarCriterio()
{
    cout << "Criterio No. " << identificador << "\n";
    cout << "Enunciado: " << enunciado << "\n";
    cout << "Ponderacion: " << ponderacion * 100 << "%\n";
    cout << "Comentarios: " << comentarios << "\n";
    cout << "Calificaciones: " << calificaciones << "\n";
}

void Criterio::setIdentificador(int identificador)
{
	this->identificador = identificador;
}

int Criterio::getIdentificador()
{
	return identificador;
}

void Criterio::setEnunciado(string enunciado)
{
	this->enunciado = enunciado;
}

string Criterio::getEnunciado()
{
	return enunciado;
}

void Criterio::setPonderacion(float ponderacion)
{
	this->ponderacion = ponderacion;
}

float Criterio::getPonderacion()
{
	return ponderacion;
}

void Criterio::setComentarios(string comentarios)
{
	this->comentarios = comentarios;
}

string Criterio::getComentarios()
{
	return comentarios;
}

void Criterio::setCalificaciones(float calificaciones)
{
	this->calificaciones = calificaciones;
}

float Criterio::getCalificaciones()
{
	return calificaciones;
}

