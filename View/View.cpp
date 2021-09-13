#include "View.h"

View::View() 
{

}

void View::menuAsistente()
{
    int opcionUsuario;
    do 
    {
        cout << "1. Crear nuevo asistente.\n";
        cout << "2. Ingresar como asistente.\n";
        cout << "0. Volver.\n";
        cout << "Digite el numero: ";
        cin >> opcionUsuario;
        switch(opcionUsuario) 
        {
            case 1:
                this->javeriana.crearAsistente();
                break;
            case 2:
                this->javeriana.ingresarComoAsistente();
                break;
            case 0:
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opcionUsuario != 0);
}

void View::menuJurado() 
{
    int opcionUsuario, numDocumento;
    string nombre;
    do 
    {
        cout << "1. Crear nuevo jurado.\n";
        cout << "2. Ingresar como jurado.\n";
        cout << "0. Volver.\n";
        cout << "Digite el numero: ";
        cin >> opcionUsuario;
        switch(opcionUsuario) 
        {
            case 1:
                this->javeriana.crearJurado();
                break;
            case 2:
                this->javeriana.ingresarComoJurado();
                break;
            case 0:
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opcionUsuario != 0);
}

void View::menuDirector() 
{
    int opcionUsuario, numDocumento;
    string nombre;
    do 
    {
        cout << "1. Crear nuevo director.\n";
        cout << "2. Ingresar como director.\n";
        cout << "0. Volver.\n";
        cout << "Digite el numero: ";
        cin >> opcionUsuario;
        switch(opcionUsuario) 
        {
            case 1:
                this->javeriana.crearDirector();
                break;
            case 2:
                this->javeriana.ingresarComoDirector();
                break;
            case 0:
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opcionUsuario != 0);
}

void View::menuReportes() 
{
    int opcionUsuario;
}

void View::mostrarMenu() 
{
    int opcionUsuario;
    do 
    {
        cout << "\nBienvendio al sistema de actas de la Universidad Javeriana de Cali\n\n";
        cout << "1. Menu asistente.\n";
        cout << "2. Menu jurado.\n";
        cout << "3. Menu director.\n";
        cout << "4. Menu reportes.\n";
        cout << "0. Cerrar programa.\n";
        cout << "Digite el numero: ";
        cin >> opcionUsuario;
        switch (opcionUsuario) 
        {
        case 1:
            menuAsistente();
            break;
        case 2:
            menuJurado();
            break;
        case 3:
            menuDirector();
            break;
        case 4: 
            menuReportes();
            break;
        case 0: cout << "Hasta luego";
            break;
        default: cout << "Opcion no contemplada, intentelo de nuevo\n";
            break;
        }
    } while(opcionUsuario != 0);
}