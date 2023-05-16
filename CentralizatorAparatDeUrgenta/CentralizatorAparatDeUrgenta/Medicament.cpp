#include "pch.h"
#include "Medicament.h"
using namespace System;

Medicament::Medicament(String^ substanta_activa, String^ denumire, float gramaj, String^ protocol)
{
	this->substanta_activa = substanta_activa;
	this->denumire = denumire;
	this->gramaj = gramaj;
	this->protocol = protocol;
}


Medicament::Medicament(String^ substanta_activa, String^ denumire, float gramaj, String^ protocol, int stoc)
{
	this->substanta_activa = substanta_activa;
	this->denumire = denumire;
	this->gramaj = gramaj;
	this->protocol = protocol;
	this->stoc = stoc;
}
void Medicament::setStoc(int stoc)
{
	this->stoc = stoc;
}

int Medicament::getStoc(void)
{
	return stoc;
}
String^ Medicament::getSubstanta_activa(void)
{
	return substanta_activa;
}


String^ Medicament::getDenumire(void)
{
	return denumire;
}
float Medicament::getGramaj(void)
{
	return gramaj;
}
String^ Medicament::getProtocol(void)
{
	return protocol;
}

int Medicament::intrariFarmacie(int cantitate)
{
	stoc = stoc + cantitate;
	return stoc;

}

int Medicament::consum(int cantitate)
{
	if (stoc > cantitate) 
	{
		stoc = stoc - cantitate;
	}
	
	return stoc;
}

void Medicament::afiseaza(void) {
	Console::WriteLine("| {0}\t| {1}\t| {2}\t| {3}\t|", denumire, substanta_activa, stoc, protocol);
}

String^ Medicament::ToString(void) 
{
	return "| " + denumire + "\t| " + substanta_activa + "\t| " + gramaj.ToString() + 
		"\t| " + stoc.ToString() + "\t| " + protocol + "\t|";
}







