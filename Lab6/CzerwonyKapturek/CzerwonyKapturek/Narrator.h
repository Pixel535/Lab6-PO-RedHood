#pragma once
#include "Postac3.h"
#include <iostream>

class Narrator :public Postac3
{

public:

	void konczy();
	void przedstawia(int wyb) override
	{
		if (wyb == 1)
		{
			std::cout << "Byla sobie kiedys mala, przesliczna dziewczynka. " << std::endl;
			std::cout << "Jej buzia byla tak slodka i radosna, że kazdy, kto tylko raz na nia spojrzal, od razu musial ja pokochac. " << std::endl;
			std::cout << "Dziewczynka wraz z rodzicami mieszkala nieopodal lasu. Czesto odwiedzala babcie, ktora gotowa byla jej przychylic nieba. " << std::endl;
			std::cout << "Babcia mieszkala w niewielkim domku otoczonym przez zielony las. " << std::endl;
			std::cout << "Pewnego dnia jej wnuczka otrzymala od niej prezent- czerwony aksamitny kapturek, ktory dziewczynka polubila tak bardzo, " << std::endl;
			std::cout << "ze za nic nie chciala sie z nim rozstawac i wszedzie nosila go na swojej cudnej glowce" << std::endl;
			std::cout << "Przez to zaczeto ja nazywac Czerwonym Kapturkiem\n" << std::endl;
		}
		else if (wyb == 2)
		{
			std::cout << " Gdy zwiazywala kolorowy bukiecik, nagle obok niej pojawil się bury, kudlaty wilk i przemowil ludzkim glosem:" << std::endl;
		}
		else if (wyb == 3)
		{
			std::cout << "Okno w pokoju bylo uchylone, wiec te straszliwe odglosy slychac bylo wokol domku." << std::endl;
			std::cout << "Przechodzacy nieopodal mysliwy pomyslal:" << std::endl;
		}
		
	}

};

