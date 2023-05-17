#pragma once
#include "Medicament.h"
using namespace System;
using namespace System::Collections::Generic;


ref class Centralizator 
{
private:
	List<Medicament^>^ medicamente;

public:
	Centralizator(void);
	~Centralizator(void);
	
	int adaugaMedicament(Medicament^ medicament);
	void eliminaMedicament(int index);
	void eliminaMedicament(String^ denumire);
	Medicament^ getMedicament(String^ denumire);

	int intrareFarmacie(void);
	int consum(void);
	void afiseazaCentralizator( void);

};

