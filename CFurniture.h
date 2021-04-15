#pragma once
#include <iostream>
#include <string>


class CFurniture{
protected:
		std::string name;
		float price;

public:
	void setData();
	void displayData();
	CFurniture();
};

