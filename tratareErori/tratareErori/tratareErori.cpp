#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	int contor; int div1 = 0;
	try {
		for (contor=5; contor > -1; contor--) {
			Console::WriteLine("\t{0}\t{1} ", "Contorul ", contor);
		}
		double div = contor / div1;
		Console::WriteLine(div);
	}
	catch (Exception^ ex){
		Console::WriteLine("\nexceptie: " + ex->Message);
	} 
	return 0;
}
