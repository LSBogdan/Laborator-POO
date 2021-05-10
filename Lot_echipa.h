
#include "Jucatori.h"
#include <vector>


class Lot_echipa
{
    std::vector<Jucator*> lot;
    int nr_jucatori;

public:

    Lot_echipa();
    virtual ~Lot_echipa();

    void add_jucator(Portar jucator);
    void add_jucator(Fundas jucator);
    void add_jucator(Mijlocas jucator);
    void add_jucator(Atacant jucator);

    void afisare_lot();

};

