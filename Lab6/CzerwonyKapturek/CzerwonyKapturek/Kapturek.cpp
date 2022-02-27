#include "Kapturek.h"

void Kapturek::postanawia()
{
	std::cout << "Dziewczynka postanowila, ¿e ju¿ nigdy nie zrobi wbrew woli swojej mamusi i tak tez sie stalo." << std::endl;
}

void Kapturek::zbacza()
{
	std::cout << "Kapturek zboczyl z drogi, a" << std::endl;
}

void Kapturek::zbiera()
{
	std::cout << " ujrzawszy przepiekne kwiaty nieopodal sciezki, dziewczynka postanowila nazbierac troche dla babci." << std::endl;
}

void Kapturek::odpowiada(int wyb)
{
	if (wyb == 1)
	{
		std::cout << "- Dzien dobry! – odpowiedzial grzecznie Czerwony Kapturek." << std::endl;
	}
	else if (wyb == 2)
	{
		std::cout << "- Koszyk z ciastem i winem dla mojej chorej babci. Ide do niej, by sprawic jej radosc i pomoc w odzyskaniu sil." << std::endl;
	}
}