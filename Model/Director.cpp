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
    float ponderacion = 10.0, calificaciones = 0;
    bool existeIdentificador = true;
    map<int, Criterio> listaCriterios = acta.getCriterios();
    do
    {
        
        cout << "Ponderacion del acta: " ;
        cin >> (ponderacion);
    
        if( ponderacion >= 0.10)
        {
            cout << "se ha cambiado el valor de la ponderacion""\n";
        }
        else
        {
            cout <<"no realizó ningun cambio en la ponderacion""\n";
        }
        break;
    }
    while(existeIdentificador);
    Criterio listaCriterio;
    listaCriterio.setIdentificador(identificador);
    listaCriterio.setEnunciado(enunciado);
    listaCriterio.setComentarios(comentarios);
    listaCriterio.setPonderacion(ponderacion);
    listaCriterio.setCalificaciones(calificaciones);
    listaCriterios[identificador] = listaCriterio;
    //cout << listaCriterio.getIdentificador() << " con identificador No." << listaCriterio.getEnunciado()
     //    << "\nEnunciados :" << listaCriterio.getComentarios() << "\nComentarios :" << listaCriterio.getPonderacion()
      //   << "\nPonderacion: " << listaCriterio.getCalificaciones() << "\nCalificaciones";
    system("PAUSE");
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