#include "ClubSportiv.h"


ClubSportiv::ClubSportiv(){
	nume = "";
	an_infiintare = 0;
	campionat = 0;
	cupa_romaniei = 0;
	supercupa_romaniei = 0;
}

ClubSportiv::ClubSportiv(const ClubSportiv& copie_club) {
	this->nume = copie_club.nume;
	this->an_infiintare = copie_club.an_infiintare;
	this->campionat = copie_club.campionat;
	this->cupa_romaniei = copie_club.cupa_romaniei;
	this->supercupa_romaniei = copie_club.supercupa_romaniei;
}

ClubSportiv ClubSportiv::operator=(const ClubSportiv& copie_club) {
	this->nume = copie_club.nume;
	this->an_infiintare = copie_club.an_infiintare;
	this->campionat = copie_club.campionat;
	this->cupa_romaniei = copie_club.cupa_romaniei;
	this->supercupa_romaniei = copie_club.supercupa_romaniei;
	return *this;
}

std::ostream& operator<<(std::ostream& output, const ClubSportiv& afisare_club) {
	output << "Echipa de fotbal: " << afisare_club.nume << " a fost infiintata in anul: " << afisare_club.an_infiintare << ".\n";
	if (afisare_club.campionat) {
		output << "Echipa de fotbal: " << afisare_club.nume << " a castigat campionatul de: " << afisare_club.campionat << " ori." << "\n";
	}
	else {
		output << "Echipa de fotbal: " << afisare_club.nume << " nu a castigat pana in acest moment campionatul." << "\n";
	}
	if (afisare_club.cupa_romaniei) {
		output << "Echipa de fotbal: " << afisare_club.nume << " a castigat cupa Romaniei de: " << afisare_club.cupa_romaniei << " ori." << "\n";
	}
	else {
		output << "Echipa de fotbal: " << afisare_club.nume << " nu a castigat pana in acest moment cupa Romaniei." << "\n";
	}
	if (afisare_club.supercupa_romaniei) {
		output << "Echipa de fotbal: " << afisare_club.nume << " a castigat supercupa Romaniei de: " << afisare_club.supercupa_romaniei << " ori." << "\n";
	}
	else {
		output << "Echipa de fotbal: " << afisare_club.nume << " nu a castigat pana in acest moment supercupa Romaniei." << "\n";
	}
	return output;
}

void ClubSportiv::detalii() {
	std::cout << "\n..."; // Aici or sa apara detalii suplimentare legate de istoria clubului: jucatori importanti, performante europene, performante in campionatul intern, etc.
}

ClubSportiv::~ClubSportiv()
{
	nume = "";
	an_infiintare = 0;
	campionat = 0;
	cupa_romaniei = 0;
	supercupa_romaniei = 0;
}
}