#pragma once
#include <iostream>
#include <cstring>


class ClubSportiv {

protected:
	std::string nume;
	int an_infiintare, campionat, cupa_romaniei, supercupa_romaniei;

public:
	ClubSportiv();
	ClubSportiv(const ClubSportiv& copie_club);
	~ClubSportiv();
	ClubSportiv operator=(const ClubSportiv & copie_club);
	friend std::ostream& operator<<(std::ostream & output, const ClubSportiv & afisare_club);

	std::string getNume() {
		return this->nume;
	}
	void setNume(std::string alt_nume) {
		this->nume = alt_nume;
	}
	int getInfiintare() {
		return an_infiintare;
	}
	void setInfiintare(int an_nou_infiintare) {
		this->an_infiintare = an_nou_infiintare;

	}
	int getCampionat() {
		return campionat;
	}
	void setCampionat(int nr_campionate) {
		this->campionat = nr_campionate;
	}
	int getCupa() {
		return cupa_romaniei;
	}
	void setCupa(int nr_cupe) {
		this->cupa_romaniei = nr_cupe;
	}
	int getSupercupa() {
		return supercupa_romaniei;
	}
	void setSupercupa(int nr_supercupe) {
		this->supercupa_romaniei = nr_supercupe;
	}

	virtual void detalii() = 0;

}