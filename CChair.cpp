#include "CChair.h"

void CChair::setData()
{
	std::cout << "Chair: " << std::endl;

	CFurniture::setData();
	std::cout << "Color: ";
	std::cin >> color;

}

void CChair::displayData()
{
	CFurniture::displayData();
	std::cout << "Color: " << color << std::endl;
}

CChair::CChair(): CFurniture()
{
	color = "Empty";

}

float CChair::getPrice()
{
	return price;
}
