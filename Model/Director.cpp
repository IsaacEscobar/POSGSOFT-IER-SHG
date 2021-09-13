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
        cout << "Ingrese ponderacion:";
        if (listaCriterios.find(ponderacion) != acta.getCriterios().end())
        {
            listaCriterios[ponderacion].setPonderacion(ponderacion) *0.10
            cout << " El valor de la ponderacion de este criterio es 10%. \n";
        }
        else 
        {
            listaCriterios[ponderacion].setPonderacion(ponderacion) != 0.10;
            cout << "ingrese porcentaje de ponderacion para evaluar el criterio. \n";
        }
        cin >> ponderacion;
        cout << "Ingrese calificaciones";.setPonderacion(ponderacion) 
        if (listaCriterios.find(calificaciones) != acta.getCriterios().end())
        {
            listaCriterios[calificaciones].setCalificaciones(calificaciones) > 3.5;
            cout << "Aprobado.\n";
        }
        else
        {
            listaCriterios[calificaciones].setCalificaciones(calificaciones) < 3.5;
            cout << "Rechazado. \n";
        }
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
    cout << "Nombre: " << setNombreTrabajo(nombreTrabajo) << "\n";
    cout << "Autor: " << setAutor(autor) << "\n";
    cout << "Numero: " << setNumeroTrabajo(numeroTrabajo) << "\n";
    cout << "Tipo: " << setTipoTrabajo(tipoTrabajo) << "\n";
    cout << "Fecha: " << setFecha(fecha) << "\n";
    cout << "Obvservaciones: " << setObvAdicionales(obvAdicionales) << "\n";
    cout << "Condiciones: " << setCondiciones(condiciones) << "\n";
    cout << "Identificador: " << setIdentificador(identificador) << "\n";
    cout << "Enunciado: " << setEnunciado(enunciado) << "\n";
    cout << "Comentarios: " << setComentarios(comentarios) << "\n";
    cout << "Ponderacion: " << setPonderacion(ponderacion) << "\n";
    cout << "Calificaciones: " << setCalificaciones(calificaciones << "\n";
}
    
