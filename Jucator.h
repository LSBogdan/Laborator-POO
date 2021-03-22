#pragma once
#include<iostream>
#include<cstring>

class Jucator {
protected:
	std::string post, nume, prenume;
	int varsta, experienta;
	float salariu;

public:
	Jucator() {
		
		post = "";
		nume = "";
		prenume = "";
		varsta = 0;
		experienta = 0;
		salariu = 0;
	}
	Jucator(std::string nume, std::string prenume, int varsta, int experienta) {
		
		this->post = "";
		this->nume = nume;
		this->prenume = prenume;
		this->varsta = varsta;
		this->experienta = experienta;
	}

	void afisare() {
		std::cout << "Nume jucator: " << this->nume << "\n";
		std::cout << "Prenume jucator: " << this->prenume << "\n";
		std::cout << "Varsta jucator: " << this->varsta << "\n";
		std::cout << "Post ocupat: " << this->post << "\n";
		std::cout << "Experienta de: " << this->experienta << " ani." << "\n";
		std::cout << "Salariu lunar: " << this->salariu << " euro" << "\n";

	}

	std::string getPost() {
		return this->post;
	}

	std::string getNume() {
		return this->nume;
	}

	std::string getPrenume() {
		return this->prenume;
	}

	int getVarsta() {
		return this->varsta;
	}

	int setVarsta(int varsta_2) {
		this->varsta = varsta_2;
	}

	int getExperienta() {
		return this->experienta;
	}

	int setExperienta(int experienta_2) {
		this->experienta = experienta_2;
	}

	float getSalariu() {
		return this->salariu;
	}

	float setSalariu(float salariu_2) {
		this->salariu = salariu_2;
	}

	virtual void mariri_salariu() = 0;
};


