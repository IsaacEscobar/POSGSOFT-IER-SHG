#include "Asistente.h"

Asistente::Asistente() 
{

}

void Asistente::mostrarNumActasPoseidas()
{
    for(vector<int>::iterator pActas = actas.begin(); pActas != actas.end(); pActas++)
    {
        cout << "Acta No." << *pActas << "\n";
    }
}

Acta Asistente::generarActa()
{

}