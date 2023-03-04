using namespace System;
#pragma once
ref class Animal
{
	//daca nu ai nimic inseamna ca este private
	String^ nume;
public:
	int picioare;

	void SetNume(String^ nume) {
		this->nume = nume;
	}

	String^ GetNume() {
		return this->nume;
	}
};

