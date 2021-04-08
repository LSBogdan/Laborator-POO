#include "Jucator.h"
#include <iostream>

Jucator::Jucator() {
    post = "";
    nume = "";
    prenume = "";
    varsta = 0;
    experienta = 0;
    salariu = 0;
}

Jucator::Jucator(const std::string& post, const std::string& nume, const std::string& prenume, int varsta,
    int experienta, float salariu) : post(post), nume(nume), prenume(prenume), varsta(varsta),
    experienta(experienta), salariu(salariu) {}

std::ostream& operator<<(std::ostream& os, const Jucator& jucator) {
    os << "Post: " << jucator.post << ".\n" << "Nume: " << jucator.nume<< ".\n" << "Prenume: " << jucator.prenume<< ".\n" << "Varsta: "
        << jucator.varsta << ".\n" << "Experienta: " << jucator.experienta << ".\n" << "Salariu: " << jucator.salariu;
    return os;
}

std::istream& operator>>(std::istream& is, Jucator& jucator) {
    std::cout << "Post: ";
    is >> jucator.post;
    std::cout << "Nume: ";
    is >> jucator.nume;
    std::cout << "Rrenume: ";
    is >> jucator.prenume;
    std::cout << "Varsta: ";
    is >> jucator.varsta;
    std::cout << "Experienta: ";
    is >> jucator.experienta;
    std::cout << "Salariu: ";
    is >> jucator.salariu;

    return is;
}
const std::string& Jucator::getPost() const {
    return post;
}

void Jucator::setPost(const std::string& post) {
    Jucator::post = post;
}

const std::string& Jucator::getNume() const {
    return nume;
}

void Jucator::setNume(const std::string& nume) {
    Jucator::nume = nume;
}

const std::string& Jucator::getPrenume() const {
    return prenume;
}

void Jucator::setPrenume(const std::string& prenume) {
    Jucator::prenume = prenume;
}

int Jucator::getVarsta() const {
    return varsta;
}

void Jucator::setVarsta(int varsta) {
    Jucator::varsta = varsta;
}

int Jucator::getExperienta() const {
    return experienta;
}

void Jucator::setExperienta(int experienta) {
    Jucator::experienta = experienta;
}

float Jucator::getSalariu() const {
    return salariu;
}

void Jucator::setSalariu(float salariu) {
    Jucator::salariu = salariu;

}

Jucator::~Jucator() {
    post = "";
    nume = "";
    prenume = "";
    varsta = 0;
    experienta = 0;
    salariu = 0;
}
