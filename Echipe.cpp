#include "Echipe.h"


FCA::FCA()
{
	nume = "";
	an_infiintare = 0;
	campionat = 0;
	cupa_romaniei = 0;
	supercupa_romaniei = 0;
}

FCA::FCA(const FCA& copie_arges)
{
	this->nume = copie_arges.nume;
	this->an_infiintare = copie_arges.an_infiintare;
	this->campionat = copie_arges.campionat;
	this->cupa_romaniei = copie_arges.cupa_romaniei;
	this->supercupa_romaniei = copie_arges.supercupa_romaniei;
}

FCA FCA::operator=(const FCA& copie_arges) {
	this->nume = copie_arges.nume;
	this->an_infiintare = copie_arges.an_infiintare;
	this->campionat = copie_arges.campionat;
	this->cupa_romaniei = copie_arges.cupa_romaniei;
	this->supercupa_romaniei = copie_arges.supercupa_romaniei;
	return *this;
}

/*
std::ostream& operator<<(std::ostream& output, const FCA& afisare_arges) {
	output << "Echipa de fotbal: " << afisare_arges.nume << " a fost infiintata in anul: " << afisare_arges.an_infiintare << ".\n";
	if (afisare_arges.campionat) {
		output << "Echipa de fotbal: " << afisare_arges.nume << " a castigat campionatul de: " << afisare_arges.campionat << " ori." << "\n";
	}
	else {
		output << "Echipa de fotbal: " << afisare_arges.nume << " nu a castigat pana in acest moment campionatul." << "\n";
	}
	if (afisare_arges.cupa_romaniei) {
		output << "Echipa de fotbal: " << afisare_arges.nume << " a castigat cupa Romaniei de: " << afisare_arges.cupa_romaniei << " ori." << "\n";
	}
	else {
		output << "Echipa de fotbal: " << afisare_arges.nume << " nu a castigat pana in acest moment cupa Romaniei." << "\n";
	}
	if (afisare_arges.supercupa_romaniei) {
		output << "Echipa de fotbal: " << afisare_arges.nume << " a castigat supercupa Romaniei de: " << afisare_arges.supercupa_romaniei << " ori." << "\n";
	}
	else {
		output << "Echipa de fotbal: " << afisare_arges.nume << " nu a castigat pana in acest moment supercupa Romaniei." << "\n";
	}
	return output;
}
*/


FCA::FCA(std::string nume, int an_infiintare, int campionat, int cupa_romaniei, int supercupa_romaniei){
	this->nume = "FC Arges Pitesti";

}

/*
void FCA::detalii() {
	std::cout << "\n..."; // Aici or sa apara detalii suplimentare legate de istoria clubului: jucatori importanti, performante europene, performante in campionatul intern, etc.
}
*/

FCA::~FCA() {
	nume = "";
	an_infiintare = 0;
	campionat = 0;
	cupa_romaniei = 0;
	supercupa_romaniei = 0;
}

void FCA::coeficient() {
	//Modalitatea in care voi alege coeficientul echipelor o sa se modifice pe parcurs, dupa ce adaug mai multe echipe
	if (campionat >= 15) {
		std::cout << "Echipa: " << this->nume << " ocupa locul" << int((this->campionat * 3) / 4);
	}
}


FCDB::FCDB() {
	nume = "";
	an_infiintare = 0;
	campionat = 0;
	cupa_romaniei = 0;
	supercupa_romaniei = 0;
}


FCDB::FCDB(std::string nume, int an_infiintare, int campionat, int cupa_romaniei, int supercupa_romaniei){
	this->nume = "FC Dinamo Bucuresti";

}

/*
void FCDB::afisare() {
	std::cout << "Echipa de fotbal: " << this->nume << " a fost infiintata in anul: " << this->an_infiintare << ".\n";
	if (campionat) {
		std::cout << "Echipa de fotbal: " << this->nume << " a castigat campionatul de: " << this->campionat << " ori." << "\n";
	}
	else {
		std::cout << "Echipa de fotbal: " << this->nume << "nu a castigat pana in acest moment campionatul." << "\n";
	}
	if (cupa_romaniei) {
		std::cout << "Echipa de fotbal: " << this->nume << "a castigat cupa Romaniei de: " << this->cupa_romaniei << " ori." << "\n";
	}
	else {
		std::cout << "Echipa de fotbal: " << this->nume << " nu a castigat pana in acest moment cupa Romaniei." << "\n";
	}
	if (supercupa_romaniei) {
		std::cout << "Echipa de fotbal: " << this->nume << " a castigat supercupa Romaniei de: " << this->supercupa_romaniei << " ori." << "\n";
	}
	else {
		std::cout << "Echipa de fotbal: " << this->nume << " nu a castigat pana in acest moment supercupa Romaniei." << "\n";
	}
}
*/

/*
void FCDB::detalii() {
	std::cout << "\n..."; // Aici or sa apara detalii suplimentare legate de istoria clubului: jucatori importanti, performante europene, performante in campionatul intern, etc.
}
*/

FCDB::~FCDB() {
	nume = "";
	an_infiintare = 0;
	campionat = 0;
	cupa_romaniei = 0;
	supercupa_romaniei = 0;

}

void FCDB::coeficient() {
	//Modalitatea in care voi alege coeficientul echipelor o sa se modifice pe parcurs, dupa ce adaug mai multe echipe
	if (campionat >= 11) {
		std::cout << "Echipa: " << this->nume << " ocupa locul" << int((this->campionat * 9) / 5);
	}
}
