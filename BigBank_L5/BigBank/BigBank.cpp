#include "pch.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"

using namespace System;

int main(array<System::String ^> ^args)
{   
    Console::WriteLine("Testing the CurrentAccount");
    CurrentAccount current("Jane", 100.0);
    current.Credit(500.0);

    if (current.Debit(550)) {
        Console::WriteLine("Debit(550) OK");
    }
    else {
        Console::WriteLine("Debit(550) failed");
    }

    Console::WriteLine(current.ToString());
    Console::WriteLine("\nTesting the SavingsAccount");
    SavingsAccount savings("Fred");
    savings.Credit(500);
    
    if (savings.Debit(50)) {
        Console::WriteLine("Debit(50) OK");
    }
    else {
        Console::WriteLine("Debit(50) failed");
    }

    if (savings.Debit(46)) {
        Console::WriteLine("Debit(46) OK");
    }
    else {
        Console::WriteLine("Debit(46) failed");
    }
   
    return 0;
}
