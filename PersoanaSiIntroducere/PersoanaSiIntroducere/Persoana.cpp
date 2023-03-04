#include "pch.h"
#include "Persoana.h"

void Persoana::setNume(String^ nume)
{
    this->nume = nume;
}

String^ Persoana::getNume()
{
    return nume;
}

void Persoana::setPrenume(String^ prenume)
{
    this->prenume = prenume;
}

String^ Persoana::getPrenume()
{
    return this->prenume;
}

Persoana::Persoana()
{
    this->nume = "Omul";
    this->prenume = "Nestiut";
    this->varsta = 20;
}

Persoana::Persoana(String^ nume, String^ prenume, unsigned varsta)
{
    this->nume = nume;
    this->prenume = prenume;
    this->varsta = varsta;
}
String^ Persoana::Nume::get()
{
    return nume + " " + prenume;
}
void Persoana::Nume::set(String^ nume)
{
    array <System::String^>^ lista = nume->Split(' ');
    this->nume = lista[0];
    if (lista->Length > 1) {
        this->prenume = lista[1];
        for (int j = 2; j < lista->Length; j++)
            this->prenume += " " + lista[j];
    }
}
unsigned Persoana::Varsta::get()
{
    return varsta;
}
void Persoana::Varsta::set(unsigned varsta)
{
    if (varsta > 150 || varsta < 18)
        throw gcnew System::OverflowException();
    this->varsta = varsta;
}
