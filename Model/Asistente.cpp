#include "Asistente.h"

Asistente::Asistente() 
{

}

void Asistente::writeCSV(string archivo)
{
    ofstream csv;
    csv.open(archivo, ios::app);
    for(vector<int>::iterator pActas = actas.begin(); pActas != actas.end(); pActas++)
    {
        csv << *pActas << ",";
    }
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
    string nombreTrabajo, autor, fecha;
    int tipoTrabajo;
    cout << "Ingrese el nombre del trabajo:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, nombreTrabajo);
    cout << "Ingrese quien es el autor:\n";
    getline(cin, autor);
    cout << "1. Investigacion\n";
    cout << "2. Aplicado\n";
    cout << "Ingrese el tipo de trabajo:\n";
    cin >> tipoTrabajo;
    cout << "Ingrese la fecha:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, fecha);
    acta->setNombreTrabajo(nombreTrabajo);
    acta->setAutor(autor);
    acta->setTipoTrabajo(tipoTrabajo);
    acta->setFecha(fecha);
    acta->setNumeroTrabajo(numeroTrabajo);
    actas.push_back(numeroTrabajo);
}

vector<int> Asistente::getActasAsistente()
{
    return this->actas;
}