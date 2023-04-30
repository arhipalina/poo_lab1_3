#pragma once
#include "BankAccount.h"
ref class SavingsAccount :
    public BankAccount
{
public:
    SavingsAccount(String^ holder);
    static void SetInterestRate(double rate);
    static double GetInterestRate();
    virtual bool CanDebit(double) override;

private:
    static double interestRate;
};

