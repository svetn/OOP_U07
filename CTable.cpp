#include "CTable.h"

void CTable::setData()
{
	std::cout << "Table: " << std::endl;

	CFurniture::setData();
	std::cout << "Capacity: ";
	std::cin >> capacity;
}

void CTable::displayData()
{
	CFurniture::displayData();
	std::cout << "Capacity: " << capacity << std::endl;
}

CTable::CTable(): CFurniture()
{
	capacity = 0;
}

float CTable::getPrice()
{
	return price;
}
