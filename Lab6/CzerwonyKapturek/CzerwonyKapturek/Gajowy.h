#pragma once
#include "Postac4.h"
#include <iostream>

class Gajowy :public Postac4
{
public:
	void czieszy_sie();
	void zaglada();
	void stwierdza();
	void rozcina();
	void slyszy();
	void budzi();
	void zaszywa();
	void chce_strzelic();
	void wyjmuje(int wyb);
	void widzi() override
	{
		std::cout << "Gdy zajrzal do domku, zobaczyl spiacego wilka i pomyslal: " << std::endl;
	}
};

