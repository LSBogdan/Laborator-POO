#include <iostream>
#include "Jucator.h"
#include "ClubSportiv.h"


int main() {
 
    ClubSportiv fca("FC Arges Pitesti", 1953, 2, 0, 0);
    std::cout << fca;

    std::cout << "Cativa jucatori din lotul echipei:" << "\n\n";
    Jucator portar_ag("Portar", "Greab", "Alexandru", 28, 10, 500.0);
    std::cout << portar_ag << std::endl;
    portar_ag.mariri_salariu();

    Jucator fundas_ag("Fundas", "Boldor", "Deian", 25, 8, 1000);
    std::cout << fundas_ag << std::endl;
    fundas_ag.mariri_salariu();

    Jucator  mijlocas_ag("Mijlocas", "Palic", "Antun", 32, 15, 1250);
    std::cout << mijlocas_ag << std::endl;
    mijlocas_ag.mariri_salariu();

    std::cout << std::endl;

    ClubSportiv fcdb("FC Dinamo Bucuresti", 1948, 18, 13, 2, Detalii("A fost infiintata candva", "Il gasesti in Bucuresti"));
    std::cout << fcdb << std::endl;

    return 0;
}
