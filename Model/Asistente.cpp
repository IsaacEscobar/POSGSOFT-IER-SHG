#include "Asistente.h"

Asistente::Asistente() 
{

}

Asistente::Asistente(string nombre, int documento)
{
    this->nombre = nombre;
    this->documento = documento;
}

void Asistente::mostrarNumActasPoseidas()
{
    for(vector<int>::iterator pActas = actas.begin(); pActas != actas.end(); pActas++)
    {
        cout << "Acta No." << *pActas << "\n";
    }
}

void Asistente::generarActa(int numeroTrabajo, Acta* acta)
{
    string nombreTrabajo, autor, tipoTrabajo, fecha;
    cout << "Ingrese el nombre del trabajo:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, nombreTrabajo);
    cout << "Ingrese quien es el autor:\n";
    getline(cin, autor);
    cout << "Ingrese el tipo de trabajo:\n";
    getline(cin, tipoTrabajo);
    cout << "Ingrese la fecha:\n";
    getline(cin, fecha);
    acta->setNombreTrabajo(nombreTrabajo);
    acta->setAutor(autor);
    acta->setTipoTrabajo(tipoTrabajo);
    acta->setFecha(fecha);
    acta->setNumeroTrabajo(numeroTrabajo);
    actas.push_back(numeroTrabajo);
}