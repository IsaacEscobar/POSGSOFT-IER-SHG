#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

//incluimos librerias que necesitamos en nuestra clase

#include <iostream>
#include <stdlib.h>
#include <ios>
#include <limits>
#include <map>
#include <iterator>
#include <fstream>
#include "Acta.h"
#include "Asistente.h"
#include "Jurado.h"
#include "Director.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::to_string;
using std::stoi;
using std::map;
using std::iterator;
using std::ofstream;
using std::ifstream;

class Universidad 
{
	// atributos de nuestra clase
    private:
        map<int, Acta> actas; // creamos un mapa que es actas
        					// donde tendremos una llave de tipo entero 
        					// y su valor es Acta
        map<int, Asistente> asistentes;// creamos un mapa que es asistentes
        					// donde tendremos una llave de tipo entero 
        					// y su valor es asistente
        map<int, Jurado> jurados;
        					// creamos un mapa que es jurados
        					// donde tendremos una llave de tipo entero 
        					// y su valor es jurados
        map<int, Director> directores;
    public: //requerimientos de la clase universidad.
        Universidad();
        void crearAsistente();
        void crearJurado();
        void crearDirector();
        void ingresarComoAsistente();
        void ingresarComoJurado();
        void ingresarComoDirector();
        void menuAsistente(Asistente* asistente);
        void menuJurado(Jurado* jurado);
        void menuDirector(Director* director);
        void generarActa(Asistente* asistente);
        void verificarJurados(Acta* acta);
        void verificarDirectores(Acta* acta);
        void mostrarInfoActa();
        void numActasDirector(Director* director);
        void modCriteriosDirector(Director* director);
        void crearCriterio(Director* director);
        void calificarActa(Jurado* jurado);
        void exportarActa(Jurado* jurado);
        void writeCSV();
        void readCSV();
};

#endif // UNIVERSIDAD_H
