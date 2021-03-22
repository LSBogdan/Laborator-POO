#pragma once
#include <iostream>
#include <cstring>

class Participanti {
protected:
	std::string nume;
	int an_infiintare, campionat, cupa_romaniei, supercupa_romaniei;
public:
	Participanti()
	{
		nume = "";
		an_infiintare = 0;
		campionat = 0;
		cupa_romaniei = 0;
		supercupa_romaniei = 0;
	}
	Participanti(std::string nume, int an_infiintare, int campionat, int cupa_romaniei, int supercupa_romaniei) {
		this->nume = nume;
		this->an_infiintare = an_infiintare;
		this->campionat = campionat;
		this->cupa_romaniei = cupa_romaniei;
		this->supercupa_romaniei = supercupa_romaniei;
	}

	std::string getNume() {
		return this->nume;
	}
	void setNume(std::string alt_nume) {
		this->nume = alt_nume;
	}
	int getInfiintare() {
		return an_infiintare;
	}
	int setInfiintare(int an_nou_infiintare) {
		this->an_infiintare = an_nou_infiintare;

	}
	int getCampionat() {
		return campionat;
	}
	int setCampionat(int nr_campionate) {
		this->campionat = nr_campionate;
	}
	int getCupa() {
		return cupa_romaniei;
	}
	int setCupa(int nr_cupe) {
		this->cupa_romaniei = nr_cupe;
	}
	int getSupercupa() {
		return supercupa_romaniei;
	}
	int setSupercupa(int nr_supercupe) {
		this->supercupa_romaniei = nr_supercupe;
	}

	virtual void afisare() = 0;
	virtual void detalii() = 0;

};

