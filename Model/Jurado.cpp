#include "Jurado.h"
#include <fstream>

Jurado::Jurado()
{
    
}

void Jurado::calificarActa(Acta acta)

{
    
}

void Jurado::exportarActa(Acta acta)
{
    ofstream file;
    file.open("C:/ruta/archivos/archivo.txt");
    file << "primera línea\n";
    file << "segunda línea\n";
    file << "tercera línea\n";
    file.close();

}