#include "Universidad.h"

Universidad::Universidad() {

}

void Universidad::crearAsistente() 
{
    int numDocumento;
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese su No. de documento: ";
    cin >> numDocumento;
    Asistente nuevoAsistente;
    nuevoAsistente.setNombre(nombre);
    nuevoAsistente.setDocumento(numDocumento);
    asistentes[numDocumento] = nuevoAsistente;
    cout << nuevoAsistente.getNombre() << " con documento No." << nuevoAsistente.getDocumento() << 
    " ha sido añadido.\n";
}