#include "pch.h"
#include "Centralizator.h"
using namespace System;

Centralizator::Centralizator(void) 
{
	medicamente = gcnew List<Medicament^ >;
}
Centralizator::~Centralizator(void) 
{
	delete(medicamente);
}

int Centralizator::adaugaMedicament(Medicament^ medicament)
{
	medicamente->Add(medicament);
	return medicamente->Count - 1;
}
void Centralizator::eliminaMedicament(int index) 
{
	medicamente->RemoveAt(index);
}
void  Centralizator::eliminaMedicament(String^ denumire)
{
	for (int i = 0; i < medicamente->Count; i++)
		if (medicamente[i]->getDenumire() == denumire)
			return medicamente->RemoveAt(i);
}

Medicament^ Centralizator::getMedicament(String^ denumire)
{
	for (int i = 0; i < medicamente->Count; i++)
		if (medicamente[i]->getDenumire() == denumire)
			return medicamente[i];
	return nullptr;
}

int  Centralizator::intrareFarmacie(void)
{
	//afiseaza lista cu medicamete din lista care pot fi suplimentate
	Console::WriteLine("Intrari Farmacie");
	for (int i = 0; i < medicamente->Count; i++)
		Console::WriteLine("{0}. {1} - {2}", i, medicamente[i]->getDenumire(), medicamente[i]->getGramaj());
	Console::WriteLine("Selectati numarul corespunzator medicamentului din lista de mai sus.");

	String^ introdus = Console::ReadLine();
	int idx;
	if (int::TryParse(introdus, idx) && idx >= 0 && idx < medicamente->Count) {
		Console::WriteLine("Introduceti numarul de medicamente de introdus maxim {0}", medicamente[idx]->getBarem()-medicamente[idx]->getStoc());
		introdus = Console::ReadLine();
		int cantitate;
		if (int::TryParse(introdus, cantitate)) {
			medicamente[idx]->intrariFarmacie(cantitate);
			Console::WriteLine("Noul stoc pentru medicamentul {0} este {1}", medicamente[idx]->getDenumire(), medicamente[idx]->getStoc());
		}
		else {
			Console::WriteLine("Ati introdus date eronate");
		}
		return medicamente[idx]->getStoc();
	}
	else {
		Console::WriteLine("Ati ales date incorecte, se anuleaza actiunea.");
		return -1;
	}
}


int  Centralizator::consum(void)
{
	Console::WriteLine("Iesiri / Consum medicamente");
	for (int i = 0; i < medicamente->Count; i++)
		Console::WriteLine("{0}. {1} - {2}", i, medicamente[i]->getDenumire(), medicamente[i]->getGramaj());
	Console::WriteLine("Selectati numarul corespunzator medicamentului din lista de mai sus.");

	String^ introdus = Console::ReadLine();
	int idx;
	if (int::TryParse(introdus, idx) && idx >= 0 && idx < medicamente->Count) {
		Console::WriteLine("Introduceti numarul de medicamente de scos maxim {0}", medicamente[idx]->getStoc());
		introdus = Console::ReadLine();
		int cantitate;
		if (int::TryParse(introdus, cantitate)) {
			medicamente[idx]->consum(cantitate);
			Console::WriteLine("Noul stoc pentru medicamentul {0} este {1}", medicamente[idx]->getDenumire(), medicamente[idx]->getStoc());

		}
		else {
			Console::WriteLine("Ati introdus date eronate");
		}
		return medicamente[idx]->getStoc();
	}
	else {
		Console::WriteLine("Ati ales date incorecte, se anuleaza actiunea.");
		return -1;
	}

}
void  Centralizator::afiseazaCentralizator(void)
{
	Console::WriteLine("Centralizator Aparat de Urgenta");
	Console::WriteLine("Nr.Crt.\t| Denumire\t| Substanta\t| Gr\t| Stoc\t| Protocol\t| Barem\t|");
	for (int i = 0; i < medicamente->Count; i++) {
		Console::WriteLine("{0}:\t{1}", i, medicamente[i]->ToString());
	}
}
