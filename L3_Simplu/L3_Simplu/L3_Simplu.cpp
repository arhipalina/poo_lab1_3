#include "pch.h"
#include "Animale.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Animal caine, pisica;
    pisica.SetNume("Pisica");
    pisica.picioare = 4;
    caine.SetNume("Caine");
    caine.picioare = 4;
    Console::WriteLine("Animal 1");
    Console::WriteLine("Nume:    ");
    Console::WriteLine(pisica.GetNume());
    Console::WriteLine("Picioare:    ");
    Console::WriteLine(pisica.picioare);
    Console::WriteLine();
    Console::WriteLine("Animal 2");
    Console::WriteLine("Nume:    ");
    Console::WriteLine(caine.GetNume());
    Console::WriteLine("Picioare:    ");
    Console::WriteLine(caine.picioare);
    Console::WriteLine();

    return 0;
}
