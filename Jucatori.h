#include "Jucator.h"
#include <exception>

class Portar: public Jucator {

public:

    Portar();
    Portar(const std::string &nume, const std::string &prenume, int varsta, int experienta);
    virtual ~Portar();

    void mariri_salariu();

    void ver_exp();

};

class Fundas: public Jucator{

public:

    Fundas();
    Fundas(const std::string &nume, const std::string &prenume, int varsta, int experienta);
    virtual ~Fundas();

    void mariri_salariu();

    void ver_exp();

};

class Mijlocas: public Jucator{

public:

    Mijlocas();
    Mijlocas(const std::string &nume, const std::string &prenume, int varsta, int experienta);
    virtual ~Mijlocas();

    void mariri_salariu();

    void ver_exp();

};

class Atacant: public Jucator{

public:
    Atacant();
    Atacant(const std::string &nume, const std::string &prenume, int varsta, int experienta);
    virtual ~Atacant();

    void mariri_salariu();

    void ver_exp();

};
