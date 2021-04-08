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
    std::cout << "nume: " << std::endl;
    is >> sportiv.nume;
    std::cout << " an_infiintare: " << std::endl;
    is >> sportiv.an_infiintare;
    std::cout << " campionate_castigate: " << std::endl;
    is >> sportiv.campionate_castigate;
    std::cout << " cupa_romaniei: " << std::endl;
    is >> sportiv.cupa_romaniei;
    std::cout << " supercupa_romaniei: " << std::endl;
    is >> sportiv.supercupa_romaniei;
    std::cout << "Detalii:" << std::endl;
    is >> sportiv.detalii;
    return is;
}

ClubSportiv::ClubSportiv(const ClubSportiv& club) {
    nume = club.nume;
    an_infiintare = club.an_infiintare;
    campionate_castigate = club.campionate_castigate;
    cupa_romaniei = club.cupa_romaniei;
    supercupa_romaniei = club.supercupa_romaniei;
    detalii = club.detalii;
}

//void ClubSportiv::detalii(){
//    std:: cout << "\n.."; // coming soon
//}

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
    os << "nume: " << sportiv.nume << " an_infiintare: " << sportiv.an_infiintare << " campionate_castigate: "
        << sportiv.campionate_castigate << " cupa_romaniei: " << sportiv.cupa_romaniei << " supercupa_romaniei: "
        << sportiv.supercupa_romaniei << std::endl;
    os << " detalii: " << sportiv.detalii << std::endl;
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

const Detalii& ClubSportiv::getDetalii() const {
    return detalii;
}

void ClubSportiv::setDetalii(const Detalii& detalii) {
    ClubSportiv::detalii = detalii;
}

ClubSportiv ClubSportiv::operator=(const ClubSportiv& clb) {
    nume = clb.getNume();
    an_infiintare = clb.getAnInfiintare();
    campionate_castigate = clb.getCampionateCastigate();
    cupa_romaniei = clb.getCupaRomaniei();
    supercupa_romaniei = clb.getSupercupaRomaniei();
    detalii = clb.getDetalii();
    return *this;
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
        os << "istoria_echipei: " << detalii.istoria_echipei << " detalii_stadion: " << detalii.detalii_stadion;
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
