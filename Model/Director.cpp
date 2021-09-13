#include "Director.h"

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
        cout << "Ingrese ponderacion:";
        cin >> ponderacion;
        cout << "Ingrese calificaciones";
        cin >> calificaciones;
        if (listaCriterios.find(calificaciones) != acta.getCriterios().end())
        {
            listaCriterios[identificador].setCalificaciones(calificaciones);
            cout << "Aprobado.\n";
        }
        else
        {
            listaCriterios[identificador].setCalificaciones(calificaciones);
            cout << "Rechazado. \n";
        }
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

// void Director::mostrarCriterio(Acta)
// {
//     getIdentificador(), getEnunciado(), getComentarios(), getPonderacion(), getCalificaciones();
// }
