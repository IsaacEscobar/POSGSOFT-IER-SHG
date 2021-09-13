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
    string nombreTrabajo, autor, tipoTrabajo, fecha;
    Acta nuevaActa;
    cout << "Ingrese el nombre del trabajo:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, nombreTrabajo);
    cout << "Ingrese quien es el autor:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, autor);
    cout << "Ingrese el tipo de trabajo:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, tipoTrabajo);
    cout << "Ingrese la fecha:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, fecha);
    nuevaActa.setNombreTrabajo(nombreTrabajo);
    nuevaActa.setAutor(autor);
    nuevaActa.setTipoTrabajo(tipoTrabajo);
    nuevaActa.setFecha(fecha);
    return nuevaActa;
}