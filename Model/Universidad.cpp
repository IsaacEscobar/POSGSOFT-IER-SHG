#include "Universidad.h"

Universidad::Universidad()
{
	//creamos e inicializamos apuntadores necesarios para la clase
    this->asistentes[1] = Asistente("I", 1);
    this->directores[1] = Director("M", 1);
    this->directores[11] = Director("J", 11);
    this->jurados[1] = Jurado("K", 1);
    this->jurados[11] = Jurado("L", 11);
}


void Universidad::crearAsistente()
{
	//elementos heredades de la clase padre persona 
    int numDocumento;
    string nombre;
    bool existeDocumento = true;
    // solicitamos datos al usuario ignorando espacios e imprimiendo 
    // variable
    cout << "Ingrese su nombre: ";
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    getline(cin, nombre);
    do 
    {
    	//solicitamos documentos y hacemos validacion 
    	// si existe o no  ,crean una varibale booleana e implementando
    	// un if 
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
	// en caso de que el asistente no se encuentre registrado en el 
	//sistema, este al ingresar su los datos solicitados se guardara y podra
	//realizar funciones de asistente    
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
	////elementos heredades de la clase padre persona
    int numDocumento;
    string nombre;
    bool existeDocumento = true;
    cout << "Ingrese su nombre: ";
    // solicitamos datos al usuario ignorando espacios e imprimiendo 
    // variable
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    getline(cin, nombre);
    do 
    {
    	//solicitamos documentos y hacemos validacion 
    	// si existe o no  ,crean una varibale booleana e implementando
    	// un if 
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
	    // en caso de que el jurado no se encuentre registrado en el 
	//sistema, este al ingresar su los datos solicitados se guardara y podra
	//realizar funciones de jurado   
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

// metodo para verificar informacion necesaria para crear acta
void Universidad::verificarJurados(Acta* nuevaActa)
{
	// informacion de jurado 
    int docJurado1, docJurado2;
    bool docJurado1Existe = false, docJurado2Existe = false;
    do
        {
        	//verificacion con documento de cada jurado si existe 
        	// con esta misma informacion puede acceder a funciones 
        	//jurado
            cout << "Ingrese el documento del jurado 1:\n";
            cin >> docJurado1;
            if(this->jurados.find(docJurado1) != this->jurados.end())
            {
                docJurado1Existe = true;
                do
                {
                    cout << "Ingrese el documento del jurado 2:\n";
                    cin >> docJurado2;
                    if(this->jurados.find(docJurado2) != this->jurados.end())
                    {
                        docJurado2Existe = true;
                        nuevaActa->getJurados()[0] = jurados[docJurado1].getNombre();
                        nuevaActa->getJurados()[1] = to_string(jurados[docJurado1].getDocumento());
                        nuevaActa->getJurados()[2] = jurados[docJurado2].getNombre();
                        nuevaActa->getJurados()[3] = to_string(jurados[docJurado2].getDocumento());
                    }
                    else
                    {
                        docJurado2Existe = false;
                        cout << "El jurado no se encuentra registrado.\n";
                    }
                } while(!docJurado2Existe);
            }
            else
            {  
                docJurado1Existe = false;
                cout << "El jurado no se encuentra registrado.\n";
            }
        } while(!docJurado1Existe); 
}

void Universidad::verificarDirectores(Acta* nuevaActa)
// informacion de directores posicon 0 nombre 1 documento 
// posicion 2 nombre Codirector  3 documento Codirector 
{
    int docDirector1, docDirector2;
    bool docDirector1Existe = false, docDirector2Existe = false;
    do
        {
            cout << "Ingrese el documento del director:\n";
            cin >> docDirector1;
            if(this->directores.find(docDirector1) != this->directores.end())
            {
                docDirector1Existe = true;
                do
                {
                    cout << "Ingrese el documento del codirector, o 0 si no desea codirector:\n";
                    cin >> docDirector2;
                    if(docDirector2 != 0)
                    {
                        if(this->directores.find(docDirector2) != this->directores.end())
                        {
                            docDirector2Existe = true;
                            nuevaActa->getDirectores()[0] = directores[docDirector1].getNombre();
                            nuevaActa->getDirectores()[1] = to_string(directores[docDirector1].getDocumento());
                            nuevaActa->getDirectores()[2] = directores[docDirector2].getNombre();
                            nuevaActa->getDirectores()[3] = to_string(directores[docDirector2].getDocumento());
                        }
                        else
                        {
                            docDirector1Existe = false;
                            cout << "El director no se encuentra registrado.\n";
                        }
                    }
                    else
                    {
                        docDirector2Existe = true;
                        nuevaActa->getDirectores()[0] = directores[docDirector1].getNombre();
                        nuevaActa->getDirectores()[1] = to_string(directores[docDirector1].getDocumento());
                        nuevaActa->getDirectores()[2] = "";
                        nuevaActa->getDirectores()[3] = "";
                    }
                } while(!docDirector2Existe);
            }
            else
            {  
                docDirector1Existe = false;
                cout << "El director no se encuentra registrado.\n";
            }
        } while(!docDirector1Existe); 
}

void Universidad::generarActa(Asistente* asistente)
//vamos a recibir un apuntor del la clase asistente
{
    int numeroTrabajo;
    Acta nuevaActa;
    bool existeActaPorNum = true;
    do
    { 
    //solicitamos informacion de identificacion del acta (REPORTE)
        cout << "Digite el numero del trabajo:\n";
        cin >> numeroTrabajo;
        nuevaActa.setNumeroTrabajo(numeroTrabajo);
        if(this->actas.find(numeroTrabajo) != this->actas.end())
        {
            existeActaPorNum = true;
            cout << "Numero de acta existente, use otro.\n";
        }
        else
        // Informacion solicitada y guardada en nuestros mapas
        // con su respectivo valor y tipo 
        // para ser llamadas en su debido apuntador
        {
            existeActaPorNum = false;
            asistente->generarActa(numeroTrabajo, &nuevaActa);
            for(map<int, Jurado>::iterator pJurado = jurados.begin(); pJurado != jurados.end();
             pJurado++)
            {
                Jurado juradoActual = pJurado->second;
                cout << juradoActual.getNombre() << " - " << juradoActual.getDocumento() << "\n";
            }
            verificarJurados(&nuevaActa);
            for(map<int, Director>::iterator pDirector = directores.begin(); pDirector != directores.end();
             pDirector++)
            {
                Director directorActual = pDirector->second;
                cout << directorActual.getNombre() << " - " << directorActual.getDocumento() << "\n";
            }
            verificarDirectores(&nuevaActa);
        }
    } while(existeActaPorNum);
    actas[numeroTrabajo] = nuevaActa;
}

void Universidad::mostrarInfoActa()
// creamos un ciclo donde si ya hay un acta generada 
// la busca e imprime informacion 

// tenemos que verificar que el acta exista y es con 
//numero de acta
{
    int opcionUsuario;
    bool existeActaPorNum = false;
    cout << "Digite el numero del acta a revisar:\n";
    cin >> opcionUsuario;
    do
    {
        if(this->actas.find(opcionUsuario) != this->actas.end())
        {
            existeActaPorNum = true;
            actas[opcionUsuario].mostrarActa();
        }
        else
        {
            existeActaPorNum = false;
            cout << "Numero de acta inexistente, use otro.\n";
        }
    } while(!existeActaPorNum);
}
// funcionalidades de asistente, recibe un apuntador 
void Universidad::menuAsistente(Asistente* asistente)
{
    int opcionUsuario;
    do
    {
        cout << "1. Crear un acta.\n";
        cout << "2. Ver historicos de actas.\n";
        cout << "0. Volver.\n";
        cout << "Digite el numero: ";
        cin >> opcionUsuario;
        switch(opcionUsuario)
        {
            case 1:
                generarActa(asistente);
                break;
            case 2:
                asistente->mostrarNumActasPoseidas();
                mostrarInfoActa();
                break;
            case 0:
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opcionUsuario != 0);
}

void Universidad::ingresarComoAsistente()
// validacion de informacion para acceder a funciones de asistente
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
            menuAsistente(&asistenteActual);
        }
    }
}

// ingresaremos al acta ya creada y finalamente el jurado sera el encargado 
// de generar la calificacion 
// tanto jurado 1 como jurado 2 ponen su calificacion 

// se valida que jurado exista y que el acta tambien exista 
void Universidad::calificarActa(Jurado* jurado)
{
    int opcionUsuario;
    bool existeActaPorNum = false;
    for(map<int, Acta>::iterator pActa = actas.begin(); pActa != actas.end(); pActa++)
    {
        Acta actaActual = pActa->second;
        if(stoi(actaActual.getJurados()[1]) == jurado->getDocumento() || 
           stoi(actaActual.getJurados()[3]) == jurado->getDocumento())
        {
            cout << "Acta No." << actaActual.getNumeroTrabajo() << "\n";
        }
    }
     do
    {
        cout << "Ingrese el numero del acta:\n";
        cin >> opcionUsuario;
        if(this->actas.find(opcionUsuario) != this->actas.end())
        {
            existeActaPorNum = true;
            actas[opcionUsuario].calificar();
        }
        else
        {
            existeActaPorNum = false;
            cout << "Numero de acta inexistente, use otro.\n";
        }
    } while(!existeActaPorNum);
}

// se valida que exista un acta 
// se valida que existan los dos jurados 
void Universidad::exportarActa(Jurado* jurado)
{
    int opcionUsuario;
    bool existeActaPorNum = false;
    for(map<int, Acta>::iterator pActa = actas.begin(); pActa != actas.end(); pActa++)
    {
        Acta actaActual = pActa->second;
        if(stoi(actaActual.getJurados()[1]) == jurado->getDocumento() || 
           stoi(actaActual.getJurados()[3]) == jurado->getDocumento())
        {
            cout << "Acta No." << actaActual.getNumeroTrabajo() << "\n";
        }
    }
    do
    {
        cout << "Ingrese el numero del acta:\n";
        cin >> opcionUsuario;
        if(this->actas.find(opcionUsuario) != this->actas.end())
        {
            existeActaPorNum = true;
            actas[opcionUsuario].exportarActa();
        }
        else
        {
            existeActaPorNum = false;
            cout << "Numero de acta inexistente, use otro.\n";
        }
    } while(!existeActaPorNum);
}

// funciones de jurado 
void Universidad::menuJurado(Jurado* jurado)
{
    int opcionUsuario;
    do
    {
        cout << "1. Evaluar acta.\n";
        cout << "2. Exportar acta.\n";
        cout << "0. Volver.\n";
        cout << "Digite el numero: ";
        cin >> opcionUsuario;
        switch(opcionUsuario)
        {
            case 1:
                calificarActa(jurado);
                break;
            case 2:
                exportarActa(jurado);
                break;
            case 0:
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opcionUsuario != 0);
}

// verificar que jurado existe en el mapa de jurados con su documento 
void Universidad::ingresarComoJurado()
{
    int numDocumento;
    cout << "Jurados en lista:\n";

    for(map<int, Jurado>::iterator pJurado = jurados.begin(); pJurado != jurados.end();
     pJurado++)
    {
        Jurado juradoActual = pJurado->second;
        cout << juradoActual.getNombre() << " - " << juradoActual.getDocumento() << "\n";
    }
    cout << "Ingrese su documento: ";
    cin >> numDocumento;
    for(map<int, Jurado>::iterator pJurado = jurados.begin(); pJurado != jurados.end();
     pJurado++)
    {
        Jurado juradoActual = pJurado->second;
        if(juradoActual.getDocumento() == numDocumento)
        {
            menuJurado(&juradoActual);
        }
    }
}


void Universidad::numActasDirector(Director* director)
{
    int opcionUsuario;
    bool existeActaPorNum = false;
    for(map<int, Acta>::iterator pActa = actas.begin(); pActa != actas.end(); pActa++)
    {
        Acta actaActual = pActa->second;
        if(stoi(actaActual.getDirectores()[1]) == director->getDocumento() || 
           stoi(actaActual.getDirectores()[3]) == director->getDocumento())
        {
            cout << "Acta No." << actaActual.getNumeroTrabajo() << "\n";
        }
    }
    do
    {
        cout << "Ingrese el numero del acta:\n";
        cin >> opcionUsuario;
        if(this->actas.find(opcionUsuario) != this->actas.end())
        {
            existeActaPorNum = true;
            actas[opcionUsuario].mostrarActa();
        }
        else
        {
            existeActaPorNum = false;
            cout << "Numero de acta inexistente, use otro.\n";
        }
    } while(!existeActaPorNum);
}

// modificar criterios 
// su ponderacion de cada criterio 
// que va desde la posicion 1 - 8
// evaluar si existe director para acceder a esta funcion 
void Universidad::modCriteriosDirector(Director* director)
{
    int opcionUsuario, opcionUsuario2;
    bool existeActaPorNum = false, existeCriterioPorID = false;
    for(map<int, Acta>::iterator pActa = actas.begin(); pActa != actas.end(); pActa++)
    {
        Acta actaActual = pActa->second;
        if(stoi(actaActual.getDirectores()[1]) == director->getDocumento() || 
           stoi(actaActual.getDirectores()[3]) == director->getDocumento())
        {
            cout << "Acta No." << actaActual.getNumeroTrabajo() << "\n";
        }
    }
    do
    {
        cout << "Ingrese el numero del acta:\n";
        cin >> opcionUsuario;
        if(this->actas.find(opcionUsuario) != this->actas.end())
        {
            existeActaPorNum = true;
            actas[opcionUsuario].mostrarActa();
            do
            {
                cout << "Ingrese el identificador del criterio:\n";
                cin >> opcionUsuario2;
                if(this->actas[opcionUsuario].getCriterios().find(opcionUsuario2) 
                   != this->actas[opcionUsuario].getCriterios().end())
                {
                    existeCriterioPorID = true;
                    Criterio criterioModificado = actas[opcionUsuario].getCriterios()[opcionUsuario2];
                    actas[opcionUsuario].modificarCriterio(opcionUsuario2);
                }
                else
                {
                    existeCriterioPorID = false;
                    cout << "Identificador de criterio inexistente, use otro.\n";
                }
            } while(!existeCriterioPorID);
        }
        else
        {
            existeActaPorNum = false;
            cout << "Numero de acta inexistente, use otro.\n";
        }
    } while(!existeActaPorNum);
}

// evaluar si existe director con su documento para acceder a su funcion 
// evaluar si existe el acta en el mapa de acta 
void Universidad::crearCriterio(Director* director)
{
    int opcionUsuario, identificador;
    bool existeActaPorNum = false, existeIdentificador = true;
    Criterio nuevoCriterio;
    for(map<int, Acta>::iterator pActa = actas.begin(); pActa != actas.end(); pActa++)
    {
        Acta actaActual = pActa->second;
        if(stoi(actaActual.getDirectores()[1]) == director->getDocumento() || 
           stoi(actaActual.getDirectores()[3]) == director->getDocumento())
        {
            cout << "Acta No." << actaActual.getNumeroTrabajo() << "\n";
        }
    }
    do
    {
        cout << "Ingrese el numero del acta:\n";
        cin >> opcionUsuario;
        if(this->actas.find(opcionUsuario) != this->actas.end())
        {
            existeActaPorNum = true;
            actas[opcionUsuario].crearCriterio();
        }
        else
        {
            existeActaPorNum = false;
            cout << "Numero de acta inexistente, use otro.\n";
        }
    } while(!existeActaPorNum);
}
// funciones director 
void Universidad::menuDirector(Director* director)
{
    int opcionUsuario;
    do
    {
        cout << "1. Modificar criterios.\n";
        cout << "2. Anadir criterio.\n";
        cout << "0. Volver.\n";
        cout << "Digite el numero: ";
        cin >> opcionUsuario;
        switch(opcionUsuario)
        {
            case 1:
                modCriteriosDirector(director);
                break;
            case 2:
                crearCriterio(director);
                break;
            case 0:
                break;
            default: cout << "Opcion no contemplada, intentelo de nuevo\n";
                break;
        }
    } while(opcionUsuario != 0);
}
// veirfiicar si existe el director con documento
// si existe en el mapa de director 
void Universidad::ingresarComoDirector()
{
    int numDocumento;
    cout << "Directores en lista:\n";

    for(map<int, Director>::iterator pDirector = directores.begin(); pDirector != directores.end();
     pDirector++)
    {
        Director directorActual = pDirector->second;
        cout << directorActual.getNombre() << " - " << directorActual.getDocumento() << "\n";
    }
    cout << "Ingrese su documento: ";
    cin >> numDocumento;
    for(map<int, Director>::iterator pDirector = directores.begin(); pDirector != directores.end();
     pDirector++)
    {
        Director directorActual = pDirector->second;
        if(directorActual.getDocumento() == numDocumento)
        {
            menuDirector(&directorActual);
        }
    }
}
