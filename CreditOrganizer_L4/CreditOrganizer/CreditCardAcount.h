#pragma once
#include "LoyaltyScheme.h"

ref class CreditCardAcount
{
	public:
		static CreditCardAcount();
		CreditCardAcount(long number, double limit);
		void SetCreditLimit(double amount);
		bool MakePurchase(double amount);
		void MakeRepayment(double amount);
		void PrintStatement();
		long GetAccountNumber();
		static int GetNumberOfAccounts();
		void RedeemLoyaltyPoints();

	private:
		static double interestRate;
		static int numberOfAccounts = 0;
		initonly long accountNumber;
		double currentBalance;
		double creditLimit;
		LoyaltyScheme^ scheme;    // Handle to a LoyaltyScheme object
};

