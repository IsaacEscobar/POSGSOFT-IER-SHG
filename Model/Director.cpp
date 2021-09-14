#include "Director.h"

Director::Director()
{

}

Director::Director(string nombre, int documento)
{
	this->nombre = nombre;
	this->documento = documento;
}

void Director::modificarCriterio(Acta acta)
{
    int identificador;
    string enunciado, comentarios;
    float ponderacion = 10.0, calificaciones = 0.0;
    bool existeIdentificador = true;
    map<int, Criterio> listaCriterios = acta.getCriterios();
    do
    {
        cout <<"Identificador: " << identificador << "\n";
        cout << "Enunciado del proyecto: " << enunciado << "\n";
        cout << "comentarios: " << comentarios << "\n";
        cout << "Ponderacion del acta: " << ponderacion << "\n" ;
        cout << "calificacion:" << calificaciones << "\n";
        

        if( ponderacion >= 0.10)
        {
            cout << "se ha cambiado el valor de la ponderacion";
        }
        else
        {
            cout <<"no realizó ningun cambio en la ponderacion";
        }
    
    } 
    while(existeIdentificador);
    Criterio listaCriterio;
    listaCriterio.setIdentificador(identificador);
    listaCriterio.setEnunciado(enunciado);
    listaCriterio.setComentarios(comentarios);
    listaCriterio.setPonderacion(ponderacion);
    listaCriterio.setCalificaciones(calificaciones);
    listaCriterios[identificador] = listaCriterio;
    cout << listaCriterio.getIdentificador() << " con identificador No." << listaCriterio.getEnunciado()
         << "\nEnunciados :" << listaCriterio.getComentarios() << "\nComentarios :" << listaCriterio.getPonderacion()
         << "\nPonderacion: " << listaCriterio.getCalificaciones() << "\nCalificaciones";
}

void Director::crearCriterio(Acta acta)
{
    int identificador;
    string enunciado, comentarios;
    float ponderacion, calificaciones;
    bool existeIdentificador = true;
    map<int, Criterio> listaCriterios = acta.getCriterios();
    do
    {
        cout << "Ingrese numero de identificador: ";
        cin >> identificador;
        if (listaCriterios.find(identificador) != acta.getCriterios().end())
	    {
	    	existeIdentificador = true;
            cout << "Identificador ya existente, indique otro.\n";
	    }
	    else
	    {
		    existeIdentificador = false;
	    }
    } while(existeIdentificador);
    Criterio nuevoCriterio;
    nuevoCriterio.setIdentificador(identificador);
    nuevoCriterio.setEnunciado(enunciado);
    nuevoCriterio.setComentarios(comentarios);
    nuevoCriterio.setPonderacion(ponderacion);
    nuevoCriterio.setCalificaciones(calificaciones);
    listaCriterios[identificador] = nuevoCriterio;
    cout << nuevoCriterio.getIdentificador() << " con identificador No." << nuevoCriterio.getEnunciado() 
    << "\nEnunciados :" << nuevoCriterio.getComentarios() << "\nComentarios :" << nuevoCriterio.getPonderacion()
    << "\nPonderacion: " << nuevoCriterio.getCalificaciones() << "\nCalificaciones";
    cout << "\nNuevo criterio creado.\n";

}

void Director::mostrarActaSeleccionada(Acta acta)
{

    cout << "Nombre Trabajo: " << acta.getNombreTrabajo();
    cout << "Nombre Jurado 1: " << acta.getJurados()[0] << "-" << acta.getJurados()[0]; //posicion 0 nombre , 1 documento
    cout << "Doc Jurado 1: " << acta.getJurados()[0] << "-" << acta.getJurados()[1];
    cout << "Nombre Jurado 2: " << acta.getJurados()[1] << "-" << acta.getJurados()[0];
    cout << "Doc Jurado 2: " << acta.getJurados()[1] << "-" << acta.getJurados()[1];
    cout << "Director: " << acta.getDirectores()[0] << "-" << acta.getDirectores()[1]; // Director 0 nombre, 1 documento
    cout << "Codirector: " << acta.getDirectores()[2] << "-" << acta.getDirectores()[3];// director 2 nombreCodirector, 3 documentoCodirector
    cout << "Autor: " << acta.getAutor();
    cout << "Tipo de trabajo: " << acta.getTipoTrabajo();
    cout << "Numero de trabajo: " << acta.getNumeroTrabajo();
    cout << "Fecha: " << acta.getFecha();
    cout << "Tipo de trabajo: " << acta.getTipoTrabajo();
    cout << "Observaciones adicionales: " << acta.getObvAdicionales();
    cout << "Tipo de trabajo: " << acta.getTipoTrabajo();
    cout << "Condiciones: " << acta.getCondiciones();

    for(map<int,Criterio>::iterator pCriterios = acta.getCriterios().begin();
     pCriterios != acta.getCriterios().end(); pCriterios++)
    {
        Criterio criterioActual = pCriterios->second;
        cout << criterioActual.getIdentificador() << " - " << criterioActual.getEnunciado()
        << criterioActual.getPonderacion() << criterioActual.getComentarios() << criterioActual.getCalificaciones() <<"\n";
    }

}
    
