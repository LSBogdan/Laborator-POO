#include <iostream>
#include <ostream>
#include <string>


class Jucator {

protected:

    std::string post, nume, prenume;
    int varsta, experienta;
    float salariu;

public:

    Jucator();
    Jucator(const std::string& nume, const std::string& prenume, int varsta, int experienta);
    virtual ~Jucator();

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

    virtual void mariri_salariu() = 0;

    virtual void ver_exp() = 0;

};
