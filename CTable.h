#pragma once
#include <iostream>
#include <string>
#include "CFurniture.h"
class CTable: public CFurniture
{
protected:
	short capacity;
public:
	void setData();
	void displayData();
	CTable();
	float getPrice();
};

