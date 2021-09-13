#include "Universidad.h"

Universidad::Universidad()
{

}

void Universidad::crearAsistente()
{
    int numDocumento;
    string nombre;
    bool existeDocumento = true;
    cout << "Ingrese su nombre: ";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    getline(cin, nombre);
    do 
    {
        cout << "Ingrese su No. de documento: ";
        cin >> numDocumento;
        if (this->asistentes.find(numDocumento) != this->asistentes.end())
	    {
	    	existeDocumento = true;
            cout << "Documento existente, indique otro.\n";
	    }
	    else
	    {
		    existeDocumento = false;
	    }
    } while(existeDocumento);
    Asistente nuevoAsistente;
    nuevoAsistente.setNombre(nombre);
    nuevoAsistente.setDocumento(numDocumento);
    asistentes[numDocumento] = nuevoAsistente;
    cout << nuevoAsistente.getNombre() << " con documento No." << nuevoAsistente.getDocumento() << 
    " ha sido agregado.\n";
}

void Universidad::crearJurado()
{
    int numDocumento;
    string nombre;
    bool existeDocumento = true;
    cout << "Ingrese su nombre: ";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    getline(cin, nombre);
    do 
    {
        cout << "Ingrese su No. de documento: ";
        cin >> numDocumento;
        if (this->jurados.find(numDocumento) != this->jurados.end())
	    {
	    	existeDocumento = true;
            cout << "Documento existente, indique otro.\n";
	    }
	    else
	    {
		    existeDocumento = false;
	    }
    } while(existeDocumento);
    Jurado nuevoJurado;
    nuevoJurado.setNombre(nombre);
    nuevoJurado.setDocumento(numDocumento);
    jurados[numDocumento] = nuevoJurado;
    cout << nuevoJurado.getNombre() << " con documento No." << nuevoJurado.getDocumento() << 
    " ha sido agregado.\n";
}

void Universidad::crearDirector()
{
    int numDocumento;
    string nombre;
    bool existeDocumento = true;
    cout << "Ingrese su nombre: ";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    getline(cin, nombre);
    do 
    {
        cout << "Ingrese su No. de documento: ";
        cin >> numDocumento;
        if (this->directores.find(numDocumento) != this->directores.end())
	    {
	    	existeDocumento = true;
            cout << "Documento existente, indique otro.\n";
	    }
	    else
	    {
		    existeDocumento = false;
	    }
    } while(existeDocumento);
    Director nuevoDirector;
    nuevoDirector.setNombre(nombre);
    nuevoDirector.setDocumento(numDocumento);
    directores[numDocumento] = nuevoDirector;
    cout << nuevoDirector.getNombre() << " con documento No." << nuevoDirector.getDocumento() << 
    " ha sido agregado.\n";
}

void Universidad::menuAsistente(Asistente asistente)
{
    int opcionusuario;
    do
    {
        cout << "1. Crear un acta.\n";
        cout << "2. Ver historicos de actas.\n";
        cout << "0. Volver.\n";
        cout << "Digite el numero: ";
        cin >> opcionusuario;
        switch(opcionusuario)
        {
            case 1:
                asistente.generarActa();
                break;
            case 2:
                asistente.mostrarNumActasPoseidas();
                
                break;
            case 0:
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opcionusuario != 0);
}

void Universidad::ingresarComoAsistente()
{
    int numDocumento;
    cout << "Asistentes en lista:\n";
    for(map<int, Asistente>::iterator pAsistente = asistentes.begin(); pAsistente != asistentes.end();
     pAsistente++)
    {
        Asistente asistenteActual = pAsistente->second;
        cout << asistenteActual.getNombre() << " - " << asistenteActual.getDocumento() << "\n";
    }
    cout << "Ingrese su documento: ";
    cin >> numDocumento;
    for(map<int, Asistente>::iterator pAsistente = asistentes.begin(); pAsistente != asistentes.end();
     pAsistente++)
    {
        Asistente asistenteActual = pAsistente->second;
        if(asistenteActual.getDocumento() == numDocumento)
        {
            menuAsistente(asistenteActual);
        }
    }
}

void Universidad::menuJurado(Jurado jurado)
{
    int opcionusuario;
    do
    {
        cout << "1. Evaluar acta.\n";
        cout << "2. Exportar acta.\n";
        cout << "0. Volver.\n";
        cout << "Digite el numero: ";
        cin >> opcionusuario;
        switch(opcionusuario)
        {
            case 1:
                jurado.calificarActa();
                break;
            case 2:
                jurado.exportarActa();
                
                break;
            case 0:
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opcionusuario != 0);
}

}

void Universidad::ingresarComoJurado()
{
    int numDocumento;
    cout << "Jurados en lista:\n";

    for(map<int, Jurado>::iterator pJurado = jurado.begin(); pJurado != jurado.end();
     pJurado++)
    {
        Jurado juradoActual = pJurado->second;
        cout << juradoActual.getNombre() << " - " << asistenteActual.getDocumento() << "\n";
    }
    cout << "Ingrese su documento: ";
    cin >> numDocumento;
    for(map<int, Jurado>::iterator pJurado = jurado.begin(); pJurado != jurado.end();
     pJurado++)
    {
        Jurado juradoActual = pJurado->second;
        if(juradoActual.getDocumento() == numDocumento)
        {
            menuJurado(juradoActual);
        }
    }
}

}

void Universidad::menuDirector(Director director)
{
    
int opcionusuario;
    do
    {
        cout << "1. Modificar criterios.\n";
        cout << "2. Anadir criterio.\n";
        cout << "3. Mostrar cristerios"
        cout << "0. Volver.\n";
        cout << "Digite el numero: ";
        cin >> opcionusuario;
        switch(opcionusuario)
        {
            case 1:
                director.modificarCriterio();
                break;
            case 2:
                director.crearAsistente();
                break;
            case 3:
                director.mostrarCriterio();
            case 0:
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opcionusuario != 0);
}

}

void Universidad::ingresarComoDirector()
{
    int numDocumento;
    cout << "Directores en lista:\n";

    for(map<int, Director>::iterator pDirector = director.begin(); pDirector != director.end();
     pDirector++)
    {
        Director directorActual = pDirector->second;
        cout << directorActual.getNombre() << " - " << directorActual.getDocumento() << "\n";
    }
    cout << "Ingrese su documento: ";
    cin >> numDocumento;
    for(map<int, Director>::iterator pDirector = director.begin(); pDirector != director.end();
     pDirector++)
    {
        Director directorActual = pDirector->second;
        if(directorActual.getDocumento() == numDocumento)
        {
            menuDirector(directorActual);
        }
    }
}

}