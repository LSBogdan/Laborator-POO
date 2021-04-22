//
// Created by Bogdan on 22/04/2021.
//

#ifndef TEMA_POO_JUCATOR_H
#define TEMA_POO_JUCATOR_H


#include <string>
#include <ostream>
#include <iostream>

class Jucator {
protected:
    std::string post, nume, prenume;
    int varsta, experienta;
    float salariu;
public:
    //--CONSTRUCTORI
    Jucator();

    Jucator(const std::string& nume, const std::string& prenume, int varsta, int experienta);

    //--FUNCTII OPERATORI
    friend std::ostream& operator<<(std::ostream& os, const Jucator& jucator);
    friend std::istream& operator>>(std::istream& is, Jucator& jucator);

    //-- GETTERI SI SETTERI
    const std::string& getPost() const;

    void setPost(const std::string& post);

    const std::string& getNume() const;

    void setNume(const std::string& nume);

    const std::string& getPrenume() const;

    void setPrenume(const std::string& prenume);

    int getVarsta() const;

    void setVarsta(int varsta);

    int getExperienta() const;

    void setExperienta(int experienta);

    float getSalariu() const;

    void setSalariu(float salariu);

    //--FUNCTII VIRTUALE
    virtual void mariri_salariu() = 0;

    /*virtual void mariri_salariu() {
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
     */
    //--DESTRUCTOR
    virtual ~Jucator();

};

#endif //TEMA_POO_JUCATOR_H
