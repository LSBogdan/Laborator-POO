#include "Lot_echipa.h"

Lot_echipa::Lot_echipa(){}

Lot_echipa::~Lot_echipa()
{
    for(int i = lot.size()-1; i>=0; i--)
        delete lot[i];
}

void Lot_echipa :: add_jucator(const Portar& jucator)
{
    lot.push_back(new Portar(jucator));
}

void Lot_echipa :: add_jucator(const Fundas& jucator)
{
    lot.push_back(new Fundas(jucator));
}

void Lot_echipa :: add_jucator(const Mijlocas& jucator)
{
    lot.push_back(new Mijlocas(jucator));
}

void Lot_echipa :: add_jucator(const Atacant& jucator)
{
    lot.push_back(new Atacant(jucator));
}


void Lot_echipa ::afisare_lot()
{
    for(int i = 0; i < lot.size(); i++) {
        std::cout << *lot[i] << "\n";
        lot[i]->mariri_salariu();
        std::cout<<"\n";
    }
}
