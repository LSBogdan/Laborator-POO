
#include "Lot_echipa.h"

Lot_echipa::Lot_echipa()
{
    nr_jucatori = 0;
}

Lot_echipa::~Lot_echipa()
{
    for(int i = nr_jucatori-1; i>=0; i--)
        delete lot[i];

    nr_jucatori = 0;
}

void Lot_echipa :: add_jucator(Portar jucator)
{
    lot.push_back(new Portar(jucator));
    nr_jucatori++;
}

void Lot_echipa :: add_jucator(Fundas jucator)
{
    lot.push_back(new Fundas(jucator));
    nr_jucatori++;

}

void Lot_echipa :: add_jucator(Mijlocas jucator)
{
    lot.push_back(new Mijlocas(jucator));
    nr_jucatori++;

}

void Lot_echipa :: add_jucator(Atacant jucator)
{
    lot.push_back(new Atacant(jucator));
    nr_jucatori++;

}


void Lot_echipa ::afisare_lot()
{
    for(int i = 0; i < nr_jucatori; i++)
        std::cout << *lot[i] << "\n\n";
    std::cout<<"\n";
}
