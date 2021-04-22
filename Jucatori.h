#include "Jucator.h"

class Portar:
        public Jucator {
public:
    Portar();

    Portar(const std::string &nume, const std::string &prenume, int varsta, int experienta);

    virtual ~Portar();

    void mariri_salariu();
};

class Fundas:
        public Jucator{
public:
    Fundas();

    Fundas(const std::string &nume, const std::string &prenume, int varsta, int experienta);

    virtual ~Fundas();

    void mariri_salariu();
};

class Mijlocas:
        public Jucator{
public:
    Mijlocas();

    Mijlocas(const std::string &nume, const std::string &prenume, int varsta, int experienta);

    virtual ~Mijlocas();

    void mariri_salariu();
};

class Atacant:
        public Jucator{
public:
    Atacant();

    Atacant(const std::string &nume, const std::string &prenume, int varsta, int experienta);

    virtual ~Atacant();

    void mariri_salariu();

};

