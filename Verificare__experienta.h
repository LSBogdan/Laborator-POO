#include <iostream>
#include <cstring>
#include <exception>
#include "Lot_echipa.h"
#include "Jucator.h"
#include "Jucatori.h"

class Verificare__experienta: public std::exception{

public:

    Verificare__experienta(){}
    ~Verificare__experienta(){}

    const char* what() const throw()
    {
        return "Jucatorul nu este experimentat inca!\n\n";
    }
};

