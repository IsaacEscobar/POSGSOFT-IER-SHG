
#include "Director.h"

Director::Director()
{

}
void Director::modificarCriterio(Acta acta)
{
    
}

void Director::crearCriterio(Acta acta)
{
    int identificador;
    string enunciado, comentarios;
    float ponderacion, calificaciones;
    bool existeIdentificador = true;
    do
    {
        cout << "Ingrese numero de identificador: ";
        cin >> identificador;
        vector<Criterio> listaCriterios = acta.getCriterios();
        if (find(listaCriterios.begin(), listaCriterios.end(), identificador) != acta.getCriterios().end())
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
    acta.getCriterios()[identificador] = nuevoCriterio;
    cout << nuevoCriterio.getIdentificador() << " con identificador No." << nuevoCriterio.getEnunciado() 
    << "\nEnunciados :" << nuevoCriterio.getComentarios() << "\nComentarios :" << nuevoCriterio.getPonderacion()
    << "\nPonderacion: " << nuevoCriterio.getCalificaciones() << "\nCalificaciones";
    cout << "\nNuevo criterio creado.\n";

}

// void Director::mostrarCriterio()
// {
//     cout << "identificador" << identificador << "\n";
//     cout << "enunciado" << enunciado << "\n";
//     cout << "ponderacion" << ponderacion << "\n";
//     cout << "comentarios" << comentarios << "\n";
//     cout << "calificaciones" << calificaciones << "\n";
// }
