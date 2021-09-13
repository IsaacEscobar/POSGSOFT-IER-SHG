#include "Director.h"
#include "Criterio.h"
#include "Acta.h"

Director::Director()
{

}
void Director::modificarCriterio(Acta acta)
{
    int identificador;
    string enunciado, comentarios;
    float ponderacion, calificaciones;
    bool existeIdentificador = true;
    map<int, Criterio> listaCriterios = acta.getCriterios();
    do
    {
        cout <<"Ingrese numero de identificador: ";
        cin >> identificador;
        cout << "Ingrese enunciado del proyecto:";
        cin >> enunciado;
        cout << "Adicionar comentarios al proyecto:";
        cin >> comentarios;
        cout << "Ingrese la ponderacion del proyecto:";
        cin >> ponderacion;
        cout << "Ingrese las calificaciones:";
        cin >> calificaciones;
        
    } while(existeIdentificador);
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

void Director::mostrarCriterio(Acta acta)
{
    map<int, Criterio>:: iterator i;
    map<int, Criterio> listaCriterios;
    for (i = listaCriterios.begin(); != listaCriterios.end(); ++i)
        cout << i->first << ": " << i->second << endl;
    return 0;
}
    
