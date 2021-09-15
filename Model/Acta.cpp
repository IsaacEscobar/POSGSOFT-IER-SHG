#include "Acta.h"

Acta::Acta()
// inicializamos los 8 criterios 
//asignandole valor de ponderacion , para posible cambio si asi lo desea el director 
{
    criterios[1] = Criterio(1, "Buena ortografia", 0.2, "");
    criterios[2] = Criterio(2, "Cumple los requisitos exigidos", 0.2, "");
    criterios[3] = Criterio(3, "Demuestra una buena sustentacion", 0.1, "");
    criterios[4] = Criterio(4, "Elabora de manera adecuada el tema asignado", 0.05, "");
    criterios[5] = Criterio(5, "Manejo de fuentes de manera correcta", 0.2, "");
    criterios[6] = Criterio(6, "Utiliza de manera correcta los recursos visuales y textuales", 0.1, "");
    criterios[7] = Criterio(7, "Presenta un esquema completo", 0.1, "");
    criterios[8] = Criterio(8, "Entrega en el plazo asignado", 0.05, "");
}

void Acta::mostrarActa()
// mostrar informacion de acta 
// verificar que tipo de trabajo es y asi asignarlo 
// guardar infromacion suminstrada en cada item donde esta en el 
//mapa criterios y asi mostrarlo finalmente
{
    cout << "Nombre trabajo: " << nombreTrabajo << "\n";
    cout << "Autor: " << autor << "\n";
    cout << "Acta No." << numeroTrabajo << "\n";
    switch(tipoTrabajo)
    {
        case 1: cout << "Tipo: Investigacion\n";
            break;
        case 2: cout << "Tipo: Aplicado\n";
            break;
    }
    cout << "Fecha: " << fecha << "\n";
    cout << "Jurado 1: " << jurados[0] << "\n";
    cout << "Jurado 2: " << jurados[2] << "\n";
    cout << "Director: " << directores[0] << "\n";
    cout << "Codirector: " << directores[2] << "\n";
    cout << "Obvservaciones: " << obvAdicionales << "\n";
    cout << "Condiciones: " << condiciones << "\n";
    cout << "Criterios:\n";
    for(map<int, Criterio>::iterator pCriterio = criterios.begin(); pCriterio != criterios.end(); pCriterio++)
    {
        Criterio criterioActual = pCriterio->second;
        criterioActual.mostrarCriterio();
    }
}
// pedir informacion del criterio 
//el el director lo requiere esta funcion acomoda la ponderacion de cada
// uno de los 8 cristerios establecidos
void Acta::modificarCriterio(int posicion)
{
    string enunciado;
    float ponderacion;
    cout << "Escriba el nuevo enunciado:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, enunciado);
    cout << "Digite la nueva ponderacion, obviando el %:\n";
    cin >> ponderacion;
    criterios[posicion].setEnunciado(enunciado);
    criterios[posicion].setPonderacion(ponderacion / 100);
}
// crea un nuevo criterio 
// valida que su identificador no exista para no repetir 
//y finalmente imprime la infromacion suministrada por el director 
void Acta::crearCriterio()
{
    int identificador;
    string enunciado;
    float ponderacion;
    bool existeIdentificador = true;
    cout << "Ingrese el enunciado:\n";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, enunciado);
    cout << "Ingrese la ponderacion:\n";
    cin >> ponderacion;
    do
    {
        cout << "Ingrese el identificador (debe ser mayor a 0):\n";
        cin >> identificador;
        if(criterios.find(identificador) != criterios.end())
        {
            existeIdentificador = true;
            cout << "Identificador existente, use otro.\n";
        }
        else
        {
            existeIdentificador =false;
            criterios[identificador].setIdentificador(identificador);
            criterios[identificador].setEnunciado(enunciado);
            criterios[identificador].setPonderacion(ponderacion / 100);
            criterios[identificador].setCalificaciones(0.0);
            criterios[identificador].setComentarios("");
        }
    } while(existeIdentificador);
}
// verifica que acta exista 
// verifica que jurado exista 
//solicita nota en los criterios 
// y finalmente da su calificacion 
// genera si fue aprobado o rechazado 
void Acta::calificar()
{
    int nota;
    string comentario, observacion, condicion;
    float notaFinal = 0.0;
    mostrarActa();
    for(map<int, Criterio>::iterator pCriterio = criterios.begin(); pCriterio != criterios.end(); pCriterio++)
    {
        Criterio actual = pCriterio->second;
        cout << "Nota criterio No." << actual.getIdentificador() << " - " 
        << actual.getPonderacion() * 100 << "%\n";
        cout << actual.getEnunciado() << "\n";
        cout << "Nota: ";  
        cin >> nota;
        cout << "Comentarios: ";
        cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
        getline(cin, comentario);
        notaFinal += nota * actual.getPonderacion();
        pCriterio->second.setCalificaciones(nota);
        pCriterio->second.setComentarios(comentario);
    }
    cout << "Ingrese las observaciones adicionales:\n";
    getline(cin, observacion);
    cout << "Ingrese las condiciones para aprobacion:\n";
    getline(cin, condicion);
    setObvAdicionales(observacion);
    setCondiciones(condicion);
    if(notaFinal > 3.5)
    {
        cout << "Nota final: " << notaFinal << " - Aprobado\n";
    }
    else
    {
        cout << "Nota final: " << notaFinal << " - Reprobado\n";
    }
}
// se genera un archvio txt 
// donde cada informacion del acta se imprime utlizando el apuntador
// ya que esta informacion queda guardda en mapa criterio

void Acta::exportarActa()
{
    ofstream archivo;
    archivo.open("reporteActa.txt");
    archivo << "Nombre Trabajo: " << getNombreTrabajo() << "\n";
    archivo << "Autor: " << getAutor() << "\n";
    switch(getTipoTrabajo())
    {
        case 1: archivo << "Tipo: Investigacion\n";
            break;
        case 2: archivo << "Tipo: Aplicado\n";
            break;
    }
    archivo << "Numero de trabajo: " << getNumeroTrabajo() << "\n";
    archivo << "Jurado 1: " << getJurados()[0] << "-" << getJurados()[1] << "\n";
    archivo << "Jurado 2: " << getJurados()[2] << "-" << getJurados()[3] << "\n";
    archivo << "Director: " << getDirectores()[0] << "-" << getDirectores()[1] << "\n";
    archivo << "Codirector: " << getDirectores()[2] << "-" << getDirectores()[3] << "\n";
    archivo << "Fecha: " << getFecha() << "\n";
    archivo << "Observaciones adicionales: " << getObvAdicionales() << "\n";
    archivo << "Condiciones: " << getCondiciones() << "\n";
    for(map<int, Criterio>::iterator pCriterio = criterios.begin(); pCriterio != criterios.end(); pCriterio++)
    {
        Criterio actual = pCriterio->second;
        archivo << "Criterio No. " << actual.getIdentificador() << "\n";
        archivo << "Enunciado: " << actual.getEnunciado() << "\n";
        archivo << "Ponderacion: " << actual.getPonderacion() * 100<< "%\n";
        archivo << "Comentarios: " << actual.getComentarios() << "\n";
        archivo << "Calificaciones: " << actual.getCalificaciones() << "\n";
    }
    cout << "Acta exportada a la carpeta.\n";
    archivo.close();
}

string Acta::getNombreTrabajo() 
{
    return nombreTrabajo;
}

void Acta::setNombreTrabajo(string nombreTrabajo) 
{
    this->nombreTrabajo = nombreTrabajo;
}

string Acta::getAutor() 
{
    return autor;
}

void Acta::setAutor(string autor) 
{
    this->autor = autor;
}

int Acta::getNumeroTrabajo()
{
    return numeroTrabajo;
}

void Acta::setNumeroTrabajo(int numeroTrabajo)
{
    this->numeroTrabajo = numeroTrabajo;
}

int Acta::getTipoTrabajo()
{
    return tipoTrabajo;
}

void Acta::setTipoTrabajo(int tipoTrabajo)
{
    this->tipoTrabajo = tipoTrabajo;
}

string Acta::getFecha()
{
    return fecha;
}

void Acta::setFecha(string fecha)
{
    this->fecha = fecha;
}

string Acta::getObvAdicionales()
{
    return obvAdicionales;
}

void Acta::setObvAdicionales(string obvAdicionales)
{
    this->obvAdicionales = obvAdicionales;
}

string Acta::getCondiciones()
{
    return condiciones;
}

void Acta::setCondiciones(string condiciones)
{
    this->condiciones = condiciones;
}

map<int, Criterio> Acta::getCriterios()
{
    return criterios;
}

string* Acta::getJurados()
{
    return jurados;
}

string* Acta::getDirectores()
{
    return directores;
}
