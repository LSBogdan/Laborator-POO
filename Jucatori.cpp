#include "Jucatori.h"


Portar::Portar()
{
	post = "";
	nume = "";
	prenume = "";
	varsta = 0;
	experienta = 0;
	salariu = 0;
}

Portar::Portar(std::string nume, std::string prenume, int varsta, int experienta) :Jucator(nume, prenume, varsta, experienta) {
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
	std::cout << "Noul tau salariu este: " << this->salariu << " euro." << "\n";
}

Portar::~Portar() {
	post = "";
	nume = "";
	prenume = "";
	varsta = 0;
	experienta = 0;
	salariu = 0;
}

Fundas::Fundas()
{
	post = "";
	nume = "";
	prenume = "";
	varsta = 0;
	experienta = 0;
	salariu = 0;
}

Fundas::Fundas(std::string nume, std::string prenume, int varsta, int experienta) :Jucator(nume, prenume, varsta, experienta) {
	this->post = "Fundas";
	this->salariu = 1600;
}

void Fundas::mariri_salariu() {
	if (experienta == 2)
		salariu *= 1.2;
	else if (experienta == 3)
		salariu *= 1.3;
	else if (experienta == 4)
		salariu *= 1.4;
	else if (experienta >= 5)
		salariu *= 1.5;
	std::cout << "Noul tau salariu este: " << this->salariu << " euro." << "\n";
}

Fundas::~Fundas() {
	post = "";
	nume = "";
	prenume = "";
	varsta = 0;
	experienta = 0;
	salariu = 0;
}

Mijlocas::Mijlocas()
{
	post = "";
	nume = "";
	prenume = "";
	varsta = 0;
	experienta = 0;
	salariu = 0;
}

Mijlocas::Mijlocas(std::string nume, std::string prenume, int varsta, int experienta) :Jucator(nume, prenume, varsta, experienta) {
	this->post = "Mijlocas";
	this->salariu = 1700;
}

void Mijlocas::mariri_salariu() {
	if (experienta == 2)
		salariu *= 1.2;
	else if (experienta == 3)
		salariu *= 1.3;
	else if (experienta == 4)
		salariu *= 1.4;
	else if (experienta >= 5)
		salariu *= 1.5;
	std::cout << "Noul tau salariu este: " << this->salariu << " euro." << "\n";
}

Mijlocas::~Mijlocas() {
	post = "";
	nume = "";
	prenume = "";
	varsta = 0;
	experienta = 0;
	salariu = 0;
}

Atacant::Atacant()
{
	post = "";
	nume = "";
	prenume = "";
	varsta = 0;
	experienta = 0;
	salariu = 0;
}

Atacant::Atacant(std::string nume, std::string prenume, int varsta, int experienta) :Jucator(nume, prenume, varsta, experienta) {
	this->post = "Atacant";
	this->salariu = 1800;
}

void Atacant::mariri_salariu() {
	if (experienta == 2)
		salariu *= 1.2;
	else if (experienta == 3)
		salariu *= 1.3;
	else if (experienta == 4)
		salariu *= 1.4;
	else if (experienta >= 5)
		salariu *= 1.5;
	std::cout << "Noul tau salariu este: " << this->salariu << " euro." << "\n";
}

Atacant::~Atacant() {
	post = "";
	nume = "";
	prenume = "";
	varsta = 0;
	experienta = 0;
	salariu = 0;
}