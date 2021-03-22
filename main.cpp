#include<iostream>
#include <cstring>
#include "Echipe.h"
#include "Jucatori.h"

int main()
{
	FCA fca("FC Arges Pitesti", 1953, 2, 0, 0);
	fca.afisare();

	std::cout << "\nCativa jucatori din lotul echipei:" << "\n\n";

	Portar portar_ag("Greab", "Alexandru", 28, 10);
	portar_ag.afisare();
	portar_ag.mariri_salariu();
	std::cout << "\n";

	Fundas fundas_ag("Boldor", "Deian", 25, 8);
	fundas_ag.afisare();
	fundas_ag.mariri_salariu();
	std::cout << "\n";

	Mijlocas mijlocas_ag("Palic", "Antun", 32, 15);
	mijlocas_ag.afisare();
	mijlocas_ag.mariri_salariu();
	std::cout << "\n";

	Atacant atacant_ag("Malele", "Cephas", 27, 9);
	atacant_ag.afisare();
	atacant_ag.mariri_salariu();
	std::cout << "\n";

	std::cout << "\n\n";

	FCDB fcdb("FC Dinamo Bucuresti", 1948, 18, 13, 2);
	fcdb.afisare();
	std::cout << "\nCativa jucatori din lotul echipei:" << "\n\n";

	Portar portar_db("Esanu", "Mihai", 22, 4);
	portar_db.afisare();
	portar_db.mariri_salariu();
	std::cout << "\n";

	Fundas fundas_db("Grigore", "Ricardo", 21, 5);
	fundas_db.afisare();
	fundas_db.mariri_salariu();
	std::cout << "\n";

	Mijlocas mijlocas_db("Anton", "Paul", 29, 11);
	mijlocas_db.afisare();
	mijlocas_db.mariri_salariu();
	std::cout << "\n";

	Atacant atacant_db("Sorescu", "Deian", 23, 5);
	atacant_db.afisare();
	atacant_db.mariri_salariu();
	std::cout << "\n";

	std::cout << "\n\n";

	return 0;
}