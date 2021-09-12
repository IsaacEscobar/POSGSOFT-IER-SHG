
#include <iostream>
#include "Director.h"
#include "Acta.h"
#include "Criterio.h"

Director::Director()
{

}
void Director::modificarCriterio(Acta)
{
    

}
void Director::crearCriterio(Acta)
{
    int identificador;
    string enunciado, comentarios;
    float ponderacion, calificaciones;
    bool existeIdentificador = true;
    do
    {
        cout << "Ingrese numero de identificador: ";
        cin >> identificador;
        if (this->Criterio.find(identificador) != this->Criterio.end())
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
    Criterio[identificador] = nuevoCriterio;
    cout << nuevoCriterio.getIdentificador() " con identificador No." << nuevoCriterio.getEnuciado() << "Enunciados :" << nuevoCriterio.getComentarios() << "Comentarios :" << nuevoCriterio.getPonderacion()
    << "Ponderacion: " << nuevoCriterio.getCalificaciones() << "Calificaciones"
    " Nuevo criterio creado.\n";

}


}

void Criterio::mostrarCriterio()
{
    cout << "identificador" << identificador << "\n";
    cout << "enunciado" << enunciado << "\n";
    cout << "ponderacion" << ponderacion << "\n";
    cout << "comentarios" << comentarios << "\n";
    cout << "calificaciones" << calificaciones << "\n";
}
