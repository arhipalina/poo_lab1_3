#pragma once
using namespace System;

ref class BankAccount abstract
{
	public:
		BankAccount(String^ holder);
		void Credit(double);
		bool Debit(double);
		double GetBalance();
		virtual String^ ToString() new;
		//virtual bool Debit(double) abstract;
		virtual bool CanDebit(double) abstract;

	protected:
		String^ RoutingInstructions(double);

	private:
		String^ accountHolder;
		double balance;
};

