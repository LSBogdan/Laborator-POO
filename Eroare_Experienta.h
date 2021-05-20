#include <iostream>
#include <cstring>
#include <exception>
#include "Lot_echipa.h"
#include "Jucator.h"
#include "Jucatori.h"

class Eroare_Experienta: public std::exception{

public:

    Eroare_Experienta(){}
    ~Eroare_Experienta(){}

    const char* what() const throw()
    {
        return "In lot exista cel putin un jucator neexperimentat!\n\n";
    }
};

