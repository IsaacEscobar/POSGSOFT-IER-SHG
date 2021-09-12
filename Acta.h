#ifndef ACTA_H
#define ACTA_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <array>
#include "Criterio.h"
#include "Persona.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::array;
using std::vector;

class Acta 
{
    private:
        string nombreTrabajo;
        int numeroTrabajo;
        string tipoTrabajo;
        string fecha;
        string obvAdicionales;
        string condiciones;
        array<Persona, 2> jurados;
        array<Persona, 2> directores;
        vector<Criterio> criterios;
    public:
        Acta();
        string getNombreTrabajo();
        void setNombreTrabajo(string nombreTrabajo);
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
        array<Persona, 2> getJurados();
        array<Persona, 2> getDirectores();
};

#endif // ACTA_H