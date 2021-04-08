#include "ClubSportiv.h"
#include <iostream>

const std::string& ClubSportiv::getNume() const {
    return nume;
}

void ClubSportiv::setNume(const std::string& nume) {
    ClubSportiv::nume = nume;
}

int ClubSportiv::getAnInfiintare() const {
    return an_infiintare;
}

void ClubSportiv::setAnInfiintare(int anInfiintare) {
    an_infiintare = anInfiintare;
}

int ClubSportiv::getCampionateCastigate() const {
    return campionate_castigate;
}

void ClubSportiv::setCampionateCastigate(int campionateCastigate) {
    campionate_castigate = campionateCastigate;
}

int ClubSportiv::getCupaRomaniei() const {
    return cupa_romaniei;
}

void ClubSportiv::setCupaRomaniei(int cupaRomaniei) {
    cupa_romaniei = cupaRomaniei;
}

int ClubSportiv::getSupercupaRomaniei() const {
    return supercupa_romaniei;
}

void ClubSportiv::setSupercupaRomaniei(int supercupaRomaniei) {
    supercupa_romaniei = supercupaRomaniei;
}

ClubSportiv::ClubSportiv() {
    nume = "";
    an_infiintare = 0;
    campionate_castigate = 0;
    cupa_romaniei = 0;
    supercupa_romaniei = 0;
    detalii.setDetaliiStadion("");
    detalii.setIstoriaEchipei("");
}

ClubSportiv::ClubSportiv(const std::string& nume, int anInfiintare, int campionateCastigate, int cupaRomaniei,
    int supercupaRomaniei) : nume(nume), an_infiintare(anInfiintare),
    campionate_castigate(campionateCastigate),
    cupa_romaniei(cupaRomaniei), supercupa_romaniei(supercupaRomaniei) {}

std::istream& operator>>(std::istream& is, ClubSportiv& sportiv) {
    std::cout << "Nume: " <<"\n";
    is >> sportiv.nume;
    std::cout << " An_infiintare: " <<"\n";
    is >> sportiv.an_infiintare;
    std::cout << " Campionate_castigate: " <<"\n";
    is >> sportiv.campionate_castigate;
    std::cout << " Cupa_romaniei: " << "\n";
    is >> sportiv.cupa_romaniei;
    std::cout << " Supercupa_romaniei: " << "\n";
    is >> sportiv.supercupa_romaniei;
    std::cout << "Detalii:" << "\n";
    is >> sportiv.detalii;
    return is;
}


ClubSportiv::~ClubSportiv() {
    nume = "";
    an_infiintare = 0;
    campionate_castigate = 0;
    cupa_romaniei = 0;
    supercupa_romaniei = 0;
    detalii.setDetaliiStadion("");
    detalii.setIstoriaEchipei("");
}

ClubSportiv::ClubSportiv(const std::string& nume, int anInfiintare, int campionateCastigate, int cupaRomaniei,
    int supercupaRomaniei, const Detalii& detalii) : nume(nume), an_infiintare(anInfiintare),
    campionate_castigate(campionateCastigate),
    cupa_romaniei(cupaRomaniei),
    supercupa_romaniei(supercupaRomaniei),
    detalii(detalii) {}

std::ostream& operator<<(std::ostream& os, const ClubSportiv& sportiv) {
    os << "Nume: " << sportiv.nume <<".\n"<< "An_infiintare: " << sportiv.an_infiintare << ".\n" << "Campionate_castigate: " 
        << sportiv.campionate_castigate <<".\n"<< "Cupa_romaniei: " << sportiv.cupa_romaniei << ".\n" << "Supercupa_romaniei: "
        << sportiv.supercupa_romaniei << ".\n";
    os << "Detalii: " << sportiv.detalii << " \n";
    return os;
}

bool ClubSportiv::operator==(const ClubSportiv& rhs) const {
    return nume == rhs.nume &&
        an_infiintare == rhs.an_infiintare &&
        campionate_castigate == rhs.campionate_castigate &&
        cupa_romaniei == rhs.cupa_romaniei &&
        supercupa_romaniei == rhs.supercupa_romaniei &&
        detalii == rhs.detalii;
}

bool ClubSportiv::operator!=(const ClubSportiv& rhs) const {
    return !(rhs == *this);
}

//--- PENTRU CLASA DETALII
const std::string& Detalii::getIstoriaEchipei() const {
    return istoria_echipei;
}

void Detalii::setIstoriaEchipei(const std::string& istoriaEchipei) {
    istoria_echipei = istoriaEchipei;
}

const std::string& Detalii::getDetaliiStadion() const {
    return detalii_stadion;
}

void Detalii::setDetaliiStadion(const std::string& detaliiStadion) {
    detalii_stadion = detaliiStadion;
}

Detalii::Detalii(const std::string& istoriaEchipei, const std::string& detaliiStadion) : istoria_echipei(
    istoriaEchipei), detalii_stadion(detaliiStadion) {}

Detalii::Detalii() {
    istoria_echipei = "";
    detalii_stadion = "";
}

std::ostream& operator<<(std::ostream& os, const Detalii& detalii) {
    if (detalii.istoria_echipei == "" && detalii.detalii_stadion == "") {
        os << "Nu exista detalii" << std::endl;
    }
    else {
        os << "Istoria_echipei: " << detalii.istoria_echipei << " Detalii_stadion: " << detalii.detalii_stadion;
    }
    return os;
}
std::istream& operator>>(std::istream& is, Detalii& detalii) {
    std::cout << "Istoria echipei:";
    is >> detalii.istoria_echipei;
    std::cout << "Detalii stadion:";
    is >> detalii.detalii_stadion;
    return is;
}

bool Detalii::operator==(const Detalii& rhs) const {
    return istoria_echipei == rhs.istoria_echipei &&
        detalii_stadion == rhs.detalii_stadion;
}

bool Detalii::operator!=(const Detalii& rhs) const {
    return !(rhs == *this);
}