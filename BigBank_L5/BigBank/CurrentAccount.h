#pragma once
#include "BankAccount.h"
ref class CurrentAccount :
    public BankAccount
{
public:
    CurrentAccount(String^ holder, double limit);
    Void ChangeOverdraftLimit(double newLimit);
    double GetOverdraftLimit();

    virtual String^ ToString() override;
    virtual bool CanDebit(double) override;
private:
    double overdraftLimit;
};

