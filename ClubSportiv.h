#pragma once
#include <string>
#include <ostream>

class Detalii {
    std::string istoria_echipei;
    std::string detalii_stadion;
public:

    const std::string& getIstoriaEchipei() const;

    void setIstoriaEchipei(const std::string& istoriaEchipei);

    const std::string& getDetaliiStadion() const;

    void setDetaliiStadion(const std::string& detaliiStadion);


    Detalii(const std::string& istoriaEchipei, const std::string& detaliiStadion);

    Detalii();


    friend std::ostream& operator<<(std::ostream& os, const Detalii& detalii);
    friend std::istream& operator>>(std::istream& is, Detalii& detalii);

    bool operator==(const Detalii& rhs) const;

    bool operator!=(const Detalii& rhs) const;
};

class ClubSportiv {
    std::string nume;
    int an_infiintare;
    int campionate_castigate;
    int cupa_romaniei;
    int supercupa_romaniei;
    Detalii detalii;
public:

    const std::string& getNume() const;

    void setNume(const std::string& nume);

    int getAnInfiintare() const;

    void setAnInfiintare(int anInfiintare);

    int getCampionateCastigate() const;

    void setCampionateCastigate(int campionateCastigate);

    int getCupaRomaniei() const;

    void setCupaRomaniei(int cupaRomaniei);

    int getSupercupaRomaniei() const;

    void setSupercupaRomaniei(int supercupaRomaniei);


    ClubSportiv();

    ClubSportiv(const std::string& nume, int anInfiintare, int campionateCastigate, int cupaRomaniei,
        int supercupaRomaniei);

    ClubSportiv(const std::string& nume, int anInfiintare, int campionateCastigate, int cupaRomaniei,
        int supercupaRomaniei, const Detalii& detalii);

    friend std::ostream& operator<<(std::ostream& os, const ClubSportiv& sportiv);

    friend std::istream& operator>>(std::istream& is, ClubSportiv& sportiv);

    bool operator==(const ClubSportiv& rhs) const;

    bool operator!=(const ClubSportiv& rhs) const;

//    virtual void detalii() = 0;


    virtual ~ClubSportiv();
};

