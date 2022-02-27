#include "Gajowy.h"

void Gajowy::czieszy_sie()
{
	std::cout << "Gajowy, ";
}

void Gajowy::zaglada()
{
	std::cout << "Wejde i zobacze, czy wszystko u niej w porzadku." << std::endl;
}

void Gajowy::stwierdza()
{
	std::cout << ", kiedy przyszlo mu do glowy, ze moze jeszcze uda sie uratowac polknieta babcie." << std::endl;
}

void Gajowy::rozcina()
{
	std::cout << " i rozcial wilkowi brzuch." << std::endl;
}

void Gajowy::slyszy()
{
	std::cout << "- Ale glosno chrapie dzisiaj ta staruszka. " << std::endl;
}

void Gajowy::budzi()
{
	std::cout << "Tu jestes, zboju! Szukam cie od dawna, ale teraz juz mi nie umkniesz!" << std::endl;
}

void Gajowy::zaszywa()
{
	std::cout << " zaszyl go w brzuchu wilka." << std::endl;
}

void Gajowy::chce_strzelic()
{
	std::cout << "I juz, juz chcial strzelic do wilka";
}

void Gajowy::wyjmuje(int wyb)
{
	if (wyb == 1)
	{
		std::cout << "Wzial zatem nozyczki";
	}
	else if (wyb == 2)
	{
		std::cout << "Mysliwy szybko przyniosl sprzed domku worek kamieni i";
	}
}