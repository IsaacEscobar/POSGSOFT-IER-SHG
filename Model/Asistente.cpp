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
    string nombreTrabajo, autor, fecha;
    int tipoTrabajo;
    cout << "Ingrese el nombre del trabajo:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, nombreTrabajo);
    cout << "Ingrese quien es el autor:\n";
    getline(cin, autor);
    cout << "1. Investigacion";
    cout << "2. Aplicado";
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
    Criterio criterio1 = Criterio(1, "Buena ortografia", 0.2, "", 0.0);
    Criterio criterio2 = Criterio(2, "Cumple los requisitos exigidos", 0.2, "", 0.0);
    Criterio criterio3 = Criterio(3, "Demuestra una buena sustentacion", 0.1, "", 0.0);
    Criterio criterio4 = Criterio(4, "Elabora de manera adecuada el tema asignado", 0.05, "", 0.0);
    Criterio criterio5 = Criterio(5, "Manejo de fuentes de manera correcta", 0.2, "", 0.0);
    Criterio criterio6 = Criterio(6, "Utiliza de manera correcta los recursos visuales y textuales", 
                                  0.1, "", 0.0);
    Criterio criterio7 = Criterio(7, "Presenta un esquema completo", 0.1, "", 0.0);
    Criterio criterio8 = Criterio(8, "Entrega en el plazo asignado", 0.05, "", 0.0);
    acta->getCriterios()[1] = criterio1;
    acta->getCriterios()[2] = criterio2;
    acta->getCriterios()[3] = criterio3;
    acta->getCriterios()[4] = criterio4;
    acta->getCriterios()[5] = criterio5;
    acta->getCriterios()[6] = criterio6;
    acta->getCriterios()[7] = criterio7;
    acta->getCriterios()[8] = criterio8;
    // for(int i = 1; i <= 8; i++)
    // {
    //     Criterio criterio = Criterio(i, "", 0.125, "", 0.0);
    //     acta->getCriterios()[i] = criterio;
    // }
}