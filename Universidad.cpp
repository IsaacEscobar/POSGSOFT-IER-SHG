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

}

void Universidad::ingresarComoJurado()
{
    int numDocumento;
    cout << "Jurados en lista:\n";
}

void Universidad::menuDirector(Director director)
{
    
}

void Universidad::ingresarComoDirector()
{
    int numDocumento;
    cout << "Directores en lista:\n";
}