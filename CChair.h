#pragma once
#include <iostream>
#include "CFurniture.h"
#include <string>
class CChair: public CFurniture
{
protected:
	std::string color;
public:
	void setData();
	void displayData();
	CChair();
	float getPrice();
};

