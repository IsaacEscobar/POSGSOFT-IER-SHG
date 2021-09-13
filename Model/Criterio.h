#ifndef CRITERIO_H
#define CRITERIO_H

#include <iostream>
#include <stdlib.h>


// Inclusion de librerias
using std::cin;
using std::cout;
using std::string;

class Criterio
{
private: //Atributos
	int identificador;
	string enunciado;
	float ponderacion;
	string comentarios;
	float calificaciones;

public:																												  //Metodos
	Criterio();																										  //Constructor
	Criterio(int identificador, string enunciado, float ponderacion, string comentarios, float calificaciones); // Gets and sets
	int getIdentificador();
	void setIdentificador(int identificador);
	string getEnunciado();
	void setEnunciado(string enunciado);
	float getPonderacion();
	void setPonderacion(float ponderacion);
	string getComentarios();
	void setComentarios(string comentarios);
	float getCalificaciones();
	void setCalificaciones(float calificaciones);
	void mostrarCriterio(int indentificador, string enunciado, float ponderacion, string comentarios, float calificaciones);
	
};



#endif // CRITERIO_H
