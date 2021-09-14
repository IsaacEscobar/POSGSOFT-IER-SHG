#include "Director.h"

Director::Director()
{

}

Director::Director(string nombre, int documento)
{
	this->nombre = nombre;
	this->documento = documento;
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
        cout << "Ingrese numero de identificador: " "\n";
        cin >> identificador;
        if (listaCriterios.find(identificador) == acta.getCriterios().end())
	    {
            cout << "Identificador ya existente, indique otro.\n";
	    }
	    else
	    {
		    cout << "Escriba comentarios del criterio nuevo: " "\n";
            cin >> comentarios;
            cout << "Comentario actualizado: " "\n";
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
    system("PAUSE");

}   