#pragma once
#include "Postac.h"
#include <iostream>

class Wilk :public Postac
{
public:
	void obmysla();
	void puka();
	void spotyka();
	void polyka(int wyb);
	void umiera();
	void wchodzi();
	void zasypia();
	void budzi_sie();
	void chce_uciec();
	void oszukuje(int wyb);
	void chrapie();
	void wyrusza(int wyb) override
	{
		std::cout << "Wilk wykorzystal chwile nieuwagi Czerwonego Kapturka i czmychnal sciezka w kierunku domku babci." << std::endl;
	}

	void dochodzi() override
	{
		std::cout << "Przez ten czas, wilk, ktory byl duzy i szybki, dobiegl do domku babci." << std::endl;
	}
	
	void pyta(int wyb) override
	{
		if (wyb == 1)
		{
			std::cout << "- A co tam masz w koszyczku?- zapytal wilk." << std::endl;
		}
		else if (wyb == 2)
		{
			std::cout << " Tak tez postanowil uczynic:" << std::endl;
			std::cout << "- A gdzie mieszka twoja babcia, dziewczynko ? " << std::endl;
		}
	}
	
};

