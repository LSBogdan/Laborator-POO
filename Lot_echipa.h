#pragma once
#include "Jucatori.h"
#include <vector>


class Lot_echipa
{
    std::vector<Jucator*> lot;

public:

    Lot_echipa();
    ~Lot_echipa();

    void add_jucator(const Portar& jucator);
    void add_jucator(const Fundas& jucator);
    void add_jucator(const Mijlocas& jucator);
    void add_jucator(const Atacant& jucator);

    void afisare_lot();

};
