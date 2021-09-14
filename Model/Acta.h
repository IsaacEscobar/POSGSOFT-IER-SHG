#ifndef ACTA_H
#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include <ios>
#include <limits>
#include <map>
#include <array>
#include "Criterio.h"


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::array;
using std::map;

enum class tipo{Investigacion = 1, Aplicado = 2};

class Acta 
{
    private:
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
    public:
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
};

#endif // ACTA_H