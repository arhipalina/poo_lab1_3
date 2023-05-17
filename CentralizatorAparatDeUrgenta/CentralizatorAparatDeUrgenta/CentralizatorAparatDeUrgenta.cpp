#include "pch.h"
#include "Medicament.h"
#include "Centralizator.h"

using namespace System;

int main(array<System::String ^> ^args)
{   
    Centralizator^ centralizator = gcnew Centralizator();

    centralizator->adaugaMedicament(gcnew Medicament("nebivololum", "nebilet", 5, "antiHTA", 10));
    centralizator->adaugaMedicament(gcnew Medicament("furosemidum", "furosemid", 40, "diuretic", 10));
    centralizator->adaugaMedicament(gcnew Medicament("bisoprololum", "concor", 5, "b-blocant", 15));
    centralizator->adaugaMedicament(gcnew Medicament("nadroparinum", "fraxiparine", 1, "antiCoag", 20));

    Console::WriteLine("Centralizator Aparat de Urgenta");
 
    while (true) {
        Console::WriteLine("Introduceti comanda dorita R renunta, I intrari farmacie, C consumuri, orice alta tasta afiseaza stocurile");
        String^ introdus = Console::ReadLine();
        if (introdus->ToLower() == "r") {
            Console::WriteLine("Bye bye");
            return 0;
        }
        if (introdus->ToLower() == "i") {
            centralizator->intrareFarmacie();
        }
        else {
            if (introdus->ToLower() == "c") {
                centralizator->consum();
            }
            else {
                centralizator->afiseazaCentralizator();
            }
        }
    }
    return 0;
}
;