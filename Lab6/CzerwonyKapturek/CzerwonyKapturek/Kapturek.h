#pragma once
#include "Postac.h"
#include "Postac2.h"
#include "Postac3.h"
#include "Postac4.h"

class Kapturek :public Postac, Postac2, Postac3, Postac4
{
public:
	void postanawia();
	void zbiera();
	void odpowiada(int wyb);
	void zbacza();
	void widzi() override
	{
		std::cout << "zastal wilka przebranego w babciny czepek i koszule nocna, lezacego w lozku i przykrytego koldra. " << std::endl;
		std::cout << "Widok ten zdziwil dziewczynkê, jednak nie podejrzewala ona jeszcze nic zlego." << std::endl;
	}
	void przedstawia(int wyb) override
	{
		if (wyb == 1)
		{
			std::cout << "Czerwony Kapturek odrzekl bez wahania:" << std::endl;
			std::cout << "- To niedaleko! Na koncu tej sciezki rosna trzy ogromne deby, oplecione przez krzaki leszczyny." << std::endl;
			std::cout << "Za tymi zaroslami zobaczysz niewielki bialy domek." << std::endl;
			std::cout << "Bardzo latwo do niego trafic. Tam mieszka moja babcia." << std::endl;
		}
	}
	void wyrusza(int wyb) override
	{
		if (wyb == 1)
		{
			std::cout << "Czerwony Kapturek kiwal jasna glowka, ale gdy tylko wszedl do lasu, zapomnial o przykazaniach mamy." << std::endl;
		}
		else if (wyb == 2)
		{
			std::cout << "Dziewczynka, gdy uznala, ze bukiet jest juz wystarczajaco piekny i pachnecy," << std::endl;
			std::cout << "by ucieszyl chora babunie, takze ruszyla przed siebie.\n" << std::endl;
		}
		
	}
	void dochodzi() override
	{
		std::cout << "Gdy Czerwony Kapturek dotarl na miejsce, " << std::endl;
	}
	void pyta(int wyb) override
	{
		if (wyb == 1)
		{
			std::cout << "- Babciu!- zawolala - Dlaczego ty masz takie wielkie uszy?" << std::endl;
		}
		else if (wyb == 2)
		{
			std::cout << "- A dlaczego masz takie ogromne oczy?" << std::endl;
		}
		else if (wyb == 3)
		{
			std::cout << "- A takie duze rece?" << std::endl;
		}
		else if (wyb == 4)
		{
			std::cout << "- A takie grozne zeby?" << std::endl;
		}
		
	}
};

