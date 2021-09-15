#ifndef ACTA_H
#define ACTA_H

//incluimos librerias necesarias
#include <iostream>
#include <stdlib.h>
#include <ios>
#include <limits>
#include <map>
#include <array>
#include <fstream>
#include "Criterio.h"


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::array;
using std::map;
using std::iterator;

//ofstream es es que nos permite generar el archivo txt para 
//dar el reporte final 
using std::ofstream;

//enum nos permite definir varios elementos  que hay en comun en un conjunto,
// como lo es tipo de investigacion , aplican para la misma clase
enum class tipo{Investigacion = 1, Aplicado = 2};

class Acta 
{
    private://atributos de clase acta ,todo lo que contiene nuestro reporte
        string nombreTrabajo;
        string autor;
        int numeroTrabajo;
        int tipoTrabajo;
        string fecha;
        string obvAdicionales;
        string condiciones;
        string jurados[4];
        string directores[4];
        map<int, Criterio> criterios;
    public: // metodos de la clase ,facilitan el resultado de 
    //las multiples tareas que el sistema de calificaciones requiere
        Acta();
        string getNombreTrabajo();
        void setNombreTrabajo(string nombreTrabajo);
        string getAutor();
        void setAutor(string Autor);
        int getNumeroTrabajo();
        void setNumeroTrabajo(int numeroTrabajo);
        int getTipoTrabajo();
        void setTipoTrabajo(int tipoTrabajo);
        string getFecha();
        void setFecha(string fecha);
        string getObvAdicionales();
        void setObvAdicionales(string obvAdicionales);
        string getCondiciones();
        void setCondiciones(string condiciones);
        string* getJurados();
        string* getDirectores();
        map<int, Criterio> getCriterios();
        void mostrarActa();
		void modificarCriterio(int posicion);
        void crearCriterio();
        void calificar();
        void exportarActa();
};

#endif // ACTA_H
