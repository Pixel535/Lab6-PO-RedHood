#include "Wilk.h"

void Wilk::obmysla()
{
	std::cout << "Chytry wilk pomyslal sobie: Ta mala wyglada bardzo smakowicie, " << std::endl;
	std::cout << "na pewno bedzie lepsza niz stara babka, ale musze cos wymyslic, by polknac obie. " << std::endl;
	std::cout << "Zapytam dziewczynke o droge do babci, ubiegne, a gdy dojdzie do domu babci, juz bede tam na nia czekal!." << std::endl;
}

void Wilk::puka()
{
	std::cout << " Zapukal do drzwi, ";
}

void Wilk::spotyka()
{
	std::cout << " - Dzien dobry, sliczna dziewczynko!" << std::endl;
}

void Wilk::polyka(int wyb)
{
	if (wyb == 1)
	{
		std::cout << " polknal babcie w calosci. " << std::endl;
	}
	else if (wyb == 2)
	{
		std::cout << "Gdy tylko wilk to powiedzial, pozarl Czerwonego Kapturka!" << std::endl;
	}
}

void Wilk::umiera()
{
	std::cout << "niestety kamienie byly zbyt ciezkie i sprawily, ze wilk padl martwy na ziemie." << std::endl;
}

void Wilk::wchodzi()
{
	std::cout << "Uslyszawszy to, wilk wszedl do srodka i" << std::endl;
}

void Wilk::zasypia()
{
	std::cout << "Jednak obfity posilek sprawil, ze poczul sennosc " << std::endl;
}

void Wilk::budzi_sie()
{
	std::cout << "Wtedy zwierze zbudzilo sie ze snu " << std::endl;
}

void Wilk::chce_uciec()
{
	std::cout << "i odkrywszy, co sie stalo, chcialo uciec," << std::endl;
}

void Wilk::oszukuje(int wyb)
{
	if (wyb == 1)
	{
		std::cout << "- To ja, Czerwony Kapturek, babuniu!- odpowiedzial wilk cienkim glosem " << std::endl;
		std::cout << "- Przynioslam ci ciasto i wino, bys odzyskala sily!" << std::endl;
	}
	else if (wyb == 2)
	{
		std::cout << "- Zebym cie mogla lepiej slyszes, kochanie." << std::endl;
	}
	else if (wyb == 3)
	{
		std::cout << "- Zebym mogla lepiej widziec, jaka jestes sliczna." << std::endl;
	}
	else if (wyb == 4)
	{
		std::cout << "- Zebym cie mogla przytulic!" << std::endl;
	}
	else if (wyb == 5)
	{
		std::cout << "- Zebym cie mogla zjesc!" << std::endl;
	}
}

void Wilk::chrapie()
{
	std::cout << "i juz niebawem w domku rozleglo sie jego glosne chrapanie." << std::endl;
}
