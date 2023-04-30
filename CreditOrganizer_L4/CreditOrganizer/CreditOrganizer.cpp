#include "pch.h"
#include "CreditCardAcount.h"


using namespace System;

int main(array<System::String ^> ^args)
{
    CreditCardAcount^ myAccount;         // Declare a handle 
    //myAccount = gcnew CreditCardAcount;  // Create a new CreditCardAccount object
    myAccount = gcnew CreditCardAcount(12349, 2500);

    myAccount->SetCreditLimit(1000);
    myAccount->MakePurchase(1000);        // Use the -> operator to invoke member functions 
    myAccount->MakeRepayment(700); 
    myAccount->PrintStatement(); 
    long num = myAccount->GetAccountNumber(); 
    Console::Write("Account number: "); 
    Console::WriteLine(num);

   

    
    Console::WriteLine("Creating account object"); 
    CreditCardAcount^ account1; 
    account1 = gcnew CreditCardAcount(12345, 2000);
    Console::WriteLine("\nMaking a purchase (300)");
    account1->MakePurchase(300); 
    Console::WriteLine("\nMaking a purchase (700)"); 
    account1->MakePurchase(700); 
    Console::WriteLine("\nMaking a purchase (500)"); 
    account1->MakePurchase(500); 
    Console::WriteLine("\nRedeeming points"); 
    account1->RedeemLoyaltyPoints();

    

    return 0;
}

/*
   int n = CreditCardAcount::GetNumberOfAccounts();
   Console::Write("Number of accounts initially: ");
   Console::WriteLine(n);
   Console::WriteLine("\nCreating first object");
   CreditCardAcount^ account1;
   account1 = gcnew CreditCardAcount(12345, 2000);
   account1->MakePurchase(300);
   account1->PrintStatement();
   Console::WriteLine("\nCreating second object");
   CreditCardAcount^ account2;
   account2 = gcnew CreditCardAcount(67890, 5000);
   account2->MakePurchase(750);
   account2->PrintStatement();
   n = CreditCardAcount::GetNumberOfAccounts();
   Console::Write("\nNumber of accounts now: ");
   Console::WriteLine(n);
   */