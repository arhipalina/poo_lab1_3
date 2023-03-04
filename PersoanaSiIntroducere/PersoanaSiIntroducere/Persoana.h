using namespace System;
#pragma once
ref class Persoana
{
private:
	String^ nume;
	String^ prenume;
	unsigned varsta;
protected:
	void setNume(String^);
	String^ getNume();
	void setPrenume(String^);
	String^ getPrenume();
public:
	Persoana();
	Persoana(String^, String^, unsigned);

	property String^ Nume {String^ get(); void set(String^); };
	property unsigned Varsta {unsigned get(); void set(unsigned); };
};

