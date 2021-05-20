#include <iostream>
#include "Jucatori.h"
#include "Eroare_Experienta.h"


Portar::Portar(const std::string &nume, const std::string &prenume, int varsta, int experienta) : Jucator(nume, prenume, varsta, experienta) {
    this->post = "Portar";
    this->salariu = 1500;
}

void Portar::mariri_salariu() {
    if (experienta == 2)
        salariu *= 1.2;
    else if (experienta == 3)
        salariu *= 1.3;
    else if (experienta == 4)
        salariu *= 1.4;
    else if (experienta >= 5)
        salariu *= 1.5;
    std::cout << "Noul tau salariu este: " << this->salariu << " euro brut pe luna.\n";
}

void Portar::ver_exp()
{
    if(this->experienta < 8)
        throw Eroare_Experienta();

    else if(this->experienta < 11)
        std::cout<<"In lot exista cel putin un jucator experimentat!\n\n";

    else
        std::cout<<"In lot exista cel putin un jucator foarte experimentat!\n\n";
}

Portar::~Portar() {
    post = "";
    nume = "";
    prenume = "";
    varsta = 0;
    experienta = 0;
    salariu = 0;
}


Fundas::Fundas(const std::string &nume, const std::string &prenume, int varsta, int experienta) : Jucator(nume, prenume, varsta, experienta) {
    this ->post = "Fundas";
    this ->salariu = 1600;
}
void Fundas::mariri_salariu() {
    if (experienta == 2)
        salariu += salariu/2;
    else if (experienta == 3)
        salariu += salariu/3;
    else if (experienta == 4)
        salariu += salariu/4;
    else if (experienta >= 5)
        salariu += salariu/5;
    std::cout << "Noul tau salariu este: " << this->salariu << " euro brut pe luna.\n";
}

void Fundas::ver_exp()
{
    if(this->experienta < 7)
        throw Eroare_Experienta();

    else if(this->experienta < 10)
        std::cout<<"In lot exista cel putin un jucator experimentat!\n\n";

    else
        std::cout<<"In lot exista cel putin un jucator foarte experimentat!\n\n";
}

Fundas::~Fundas() {
    post = "";
    nume = "";
    prenume = "";
    varsta = 0;
    experienta = 0;
    salariu = 0;
}


Mijlocas::Mijlocas(const std::string &nume, const std::string &prenume, int varsta, int experienta) : Jucator(nume, prenume, varsta, experienta) {
    this ->post = "Mijlocas";
    this -> salariu = 1700;
}

void Mijlocas::mariri_salariu() {
    if (experienta == 2)
        salariu += salariu * 15 / 100;
    else if (experienta == 3)
        salariu += salariu * 20 / 100;
    else if (experienta == 4)
        salariu += salariu * 25 / 100;
    else if (experienta >= 5)
        salariu += salariu * 30/ 100;
    std::cout << "Noul tau salariu este: " << this->salariu << " euro brut pe luna.\n";
}

void Mijlocas::ver_exp()
{
    if(this->experienta < 9)
        throw Eroare_Experienta();

    else if(this->experienta < 12)
        std::cout<<"In lot exista cel putin un jucator experimentat!\n\n";

    else
        std::cout<<"In lot exista cel putin un jucator foarte experimentat!\n\n";
}

Mijlocas::~Mijlocas() {
    post = "";
    nume = "";
    prenume = "";
    varsta = 0;
    experienta = 0;
    salariu = 0;
}


Atacant::Atacant(const std::string &nume, const std::string &prenume, int varsta, int experienta) : Jucator(nume, prenume, varsta, experienta) {
    this->post = "Atacant";
    this->salariu = 1800;
}

void Atacant::mariri_salariu() {
    if (experienta == 2)
        salariu += salariu * 0.15;
    else if (experienta == 3)
        salariu += salariu * 0.35;
    else if (experienta == 4)
        salariu +=  salariu * 0.55;
    else if (experienta >= 5)
        salariu += salariu * 0.75;
    std::cout << "Noul tau salariu este: " << this->salariu << " euro brut pe luna.\n";
}

void Atacant::ver_exp()
{
    if(this->experienta < 6)
        throw Eroare_Experienta();

    else if(this->experienta < 9)
        std::cout<<"In lot exista cel putin un jucator experimentat!\n\n";

    else
        std::cout<<"In lot exista cel putin un jucator foarte experimentat!\n\n";
}

Atacant::~Atacant() {
    post = "";
    nume = "";
    prenume = "";
    varsta = 0;
    experienta = 0;
    salariu = 0;
}
