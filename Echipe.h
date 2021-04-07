#pragma once
#include "ClubSportiv.h"


class FCA :
    public ClubSportiv {
public:
    FCA();
    FCA(std::string, int, int, int, int);
    ~FCA();
    FCA(const FCA& copie_arges);
    //FCA operator=(const FCA& copie_arges);
    FCA::FCA(std::string, int, int, int, int);
    friend std::ostream& operator<<(std::ostream& output, const FCA& afisare_arges);
    void coeficient();
  // void detalii();

};

class FCDB :public ClubSportiv {
public:
    FCDB();
    FCDB(std::string, int, int, int, int);
    ~FCDB();
    void coeficient();
//    void detalii();
};

