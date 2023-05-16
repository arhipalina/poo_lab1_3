#include "pch.h"
#include "Medicament.h"

using namespace System;

int main(array<System::String ^> ^args)
{   
    Medicament^ med1 = gcnew Medicament("nebivololum", "nebilet", 5, "antiHTA");
    Medicament^ med2 = gcnew Medicament("furosemidum", "furosemid", 40, "diuretic", 15);

    med1->setStoc(10);

    Console::WriteLine("Centralizator Aparat de Urgenta");
    Console::WriteLine("Nr.Crt.\t| Denumire\t| Substanta\t| Gr\t| Stoc\t| Protocol\t|");
    //Console::WriteLine("1:\t{0}|\t{1}|\t{2}", med1->getDenumire(), med1->getProtocol(), med1->getStoc());
    //Console::WriteLine("2:\t{0}|\t{1}|\t{2}", med2->getDenumire(), med2->getProtocol(), med2->getStoc());
    Console::WriteLine("1:\t{0}", med1->ToString());
    Console::WriteLine("2:\t{0}", med2->ToString());
    /*
    int a;
    String^ aa = Console::ReadLine();
    //a = int::Parse(aa);
    if (int::TryParse(aa, a)) {
        Console::WriteLine("ai introdus valoarea {0}", a);
    }else
    Console::WriteLine("ai introdus valoarea {0}", aa);
    float b;
    if (float::TryParse(aa, b)) {

    }
    */
    return 0;
}
