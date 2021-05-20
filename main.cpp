#include <iostream>
#include "Jucatori.h"
#include "ClubSportiv.h"
#include "Lot_echipa.h"


int main() {

    Lot_echipa arges;

    ClubSportiv fca("FC Arges Pitesti", 1953, 2, 0, 0);
    std::cout << fca;

    std::cout << "Cativa jucatori din lotul echipei:" << "\n\n";

    Portar portar_ag("Greab", "Alexandru", 28, 7);
    arges.add_jucator(portar_ag);

    Fundas fundas_ag("Boldor", "Deian", 25, 8);
    arges.add_jucator(fundas_ag);
    
    Mijlocas  mijlocas_ag("Palic", "Antun", 32, 15);
    arges.add_jucator(mijlocas_ag);

    Atacant atacant_ag("Malele", "Cephas", 27, 9);
    arges.add_jucator(atacant_ag);

    arges.afisare_lot();

    try
    {   portar_ag.ver_exp();
        fundas_ag.ver_exp();
        mijlocas_ag.ver_exp();
        atacant_ag.ver_exp();
    }
    catch (const std::exception& e)
    {
        std::cout<<e.what();
    }

    ClubSportiv fcdb("FC Dinamo Bucuresti", 1948, 18, 13, 2, Detalii("FC Dinamo Bucuresti, pe scurt Dinamo, este un club de fotbal din Bucuresti, Romania, care evolueaza in Liga I. Fondata in 1948, echipa a debutat direct in prima divizie a Romaniei si nu a retrogradat niciodata. Din punct de vedere al numarului de trofee, Dinamo are in palmares 18 titluri nationale, 13 Cupe ale Romaniei, 2 Supercupe ale Romaniei si o semifinala a Cupei Campionilor Europeni in sezonul 1983_1984.", "Stadionul Dinamo, numit si Stadionul Stefan cel Mare este un stadion din Bucuresti si apartine clubului Dinamo Bucuresti, inaugurat in anul 1952. Stadionul este amplasat in Sectorul 2 din Bucuresti, pe Soseaua Stefan cel Mare."));
    std::cout <<"\n" << fcdb << "\n";

    return 0;
}
