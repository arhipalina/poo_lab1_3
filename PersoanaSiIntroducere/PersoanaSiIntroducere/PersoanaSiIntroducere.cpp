#include "pch.h"
#include "persoana.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    String^ parametru = args->Length > 1 ? args[1] : "";
    Console::WriteLine("Ai apelat aplicatia cu parametrul: {0}", parametru);

    Persoana^ student = gcnew Persoana();
    Console::WriteLine("Am creat studentul {0} cu varsta {1}", student->Nume, student->Varsta);
    
    Console::WriteLine("Noul nume si prenume pentru student: ");
    student->Nume = Console::ReadLine();
    bool repeta;
    do {
        repeta = false;
        Console::WriteLine("Noua varsta a studentului: ");
        try {
            student->Varsta = unsigned::Parse(Console::ReadLine());
        }
        catch (Exception^ e) {
            repeta = true;
            Console::WriteLine("Varsta trebuie sa fie un  numar pozitiv mai mare ca 18 si mai mic ca 151 ");
        }
             
    } while (repeta);

    Console::WriteLine("Noul nume {0} si noua varsta {1}", student->Nume, student->Varsta);

    return 0;
}
