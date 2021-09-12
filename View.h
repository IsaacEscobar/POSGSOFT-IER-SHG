#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <stdlib.h>
#include "Universidad.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class View 
{
    private:
        Universidad javeriana;
    public:
        View();
        void mostrarMenu();
        void menuAsistente();
        void menuJurado();
        void menuDirector();
        void menuReportes();
};

#endif // VIEW_H