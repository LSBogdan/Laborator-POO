#pragma once
#include "Jucator.h"
#include "Participanti.h"

class Portar :
    public Jucator {
public:
    Portar();
    Portar(std::string, std::string, int, int);
    ~Portar();
    void mariri_salariu();
};

class Fundas :
    public Jucator {
public:
    Fundas();
    Fundas(std::string, std::string, int, int);
    ~Fundas();
    void mariri_salariu();
};

class Mijlocas :
    public Jucator {
public:
    Mijlocas();
    Mijlocas(std::string, std::string, int, int);
    ~Mijlocas();
    void mariri_salariu();
};

class Atacant :
    public Jucator {
public:
    Atacant();
    Atacant(std::string, std::string, int, int);
    ~Atacant();
    void mariri_salariu();
};