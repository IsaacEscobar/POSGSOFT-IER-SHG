#ifndef ACTA_H
#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include <map>
#include <array>
#include "Criterio.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::array;
using std::map;

class Acta 
{
    private:
        string nombreTrabajo;
        string autor;
        int numeroTrabajo;
        string tipoTrabajo;
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
        string getTipoTrabajo();
        void setTipoTrabajo(string tipoTrabajo);
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
};

#endif // ACTA_H