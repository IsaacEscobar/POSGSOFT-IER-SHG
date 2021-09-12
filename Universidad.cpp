#include "Universidad.h"

Universidad::Universidad() {

}

Universidad::crearAsistente() 
{
    int numDocumento;
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese su No. de documento: ";
    cin >> numDocumento;
    Asistente nuevoAsistente = Asistente(nombre, numDocumento);
    
}