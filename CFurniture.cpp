#include "CFurniture.h"

void CFurniture::setData()
{
	std::cout << "Name: ";
	std::cin >> name;

	std::cout << "Price: ";
	std::cin >> price;
}

void CFurniture::displayData()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Price: " << price << std::endl;

}

float CFurniture::getPrice()
{
	return price;
}


CFurniture::CFurniture()
{
	name = "Empty";
	price = 0.f;
}
