#pragma once
#include "Participanti.h"
#include <iostream>

class FCA :
    public Participanti {
public:
    FCA();
    FCA(std::string, int, int, int, int);
    ~FCA();
    FCA(FCA& copie_arges);
    FCA operator=(const FCA& copie_arges);
    friend std::ostream& operator<<(std::ostream& output, const FCA& afisare_arges);
    void afisare();
    void detalii();

};

class FCDB :public Participanti {
public:
    FCDB();
    FCDB(std::string, int, int, int, int);
    ~FCDB();
    void afisare();
    void detalii();
};

