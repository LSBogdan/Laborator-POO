#pragma once

#include <string>
#include <ostream>
#include <iostream>

class Jucator {
protected:
    std::string post, nume, prenume;
    int varsta, experienta;
    float salariu;
public:
    Jucator();

    Jucator(const std::string& post, const std::string& nume, const std::string& prenume, int varsta, int experienta,
        float salariu);

    friend std::ostream& operator<<(std::ostream& os, const Jucator& jucator);
    friend std::istream& operator>>(std::istream& is, Jucator& jucator);

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

    virtual void mariri_salariu() {
        if (experienta == 2)
            salariu *= 1.2;
        else if (experienta == 3)
            salariu *= 1.3;
        else if (experienta == 4)
            salariu *= 1.4;
        else if (experienta >= 5)
            salariu *= 1.5;
        std::cout << "Noul tau salariu este: " << this->salariu << " euro." << "\n\n";
    }


    virtual ~Jucator();

};
