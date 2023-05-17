#pragma once
using namespace System;

ref class Medicament
{
private:
	String^ substanta_activa;
	String^ denumire;
	float gramaj;
	String^ protocol;
	int stoc;
	int barem;

public:
	Medicament(String^ substanta_activa, String^ denumire, float gramaj, String^ procol, int barem);

	void setStoc(int stoc);
	int getStoc(void);
	String^ getSubstanta_activa(void);
	String^ getDenumire(void);
	float getGramaj(void);
	String^ getProtocol(void);
	int intrariFarmacie(int cantitate);
	int consum(int cantitate);
	int getBarem(void);

	Medicament^ operator+(Medicament^ med) {
		if (med->denumire->CompareTo(denumire) && med->gramaj == gramaj) {
			Medicament^ medicament_nou = gcnew Medicament(substanta_activa, denumire, gramaj, protocol, stoc);
			medicament_nou->intrariFarmacie(med->getStoc());
			return medicament_nou;
		}
		return nullptr;
	}

	void afiseaza(void);
	 String^  ToString(void) override;

};

