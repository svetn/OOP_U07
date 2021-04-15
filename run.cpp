#include <iostream>
#include <conio.h>
#include "CChair.h"
#include "CTable.h"

void deleteData(CTable *arr1[], CChair *arr2[],int number)
{
	for (int i = 0; i < number; i++)
	{
		delete arr1[i];
		delete arr2[i];
	}
	delete []arr1;
	delete []arr2;
}

int main()
{
	CChair* chair = new CChair[200];
	CTable* table = new CTable[200];
	int number = 0;
	int done = 0;

	while (!done)
	{
		std::cout << "1 - Add data for both of the furnitures" << std::endl;
		std::cout << "2 - Display all furnitures data" << std::endl;
		std::cout << "3 - Display the most cheap chair" << std::endl;
		std::cout << "4 - Display the most expensive table" << std::endl;
		std::cout << "5 - Choose an operation or 0 to end" << std::endl;
			switch (_getch())
			{
			case'1':
			{
				chair[number].setData();
				table[number].setData();
				number++;
				break;
			}
			case '2':
			{
				for (int i = 0; i < number; i++) 
				{
					chair[i].displayData();
					table[i].displayData();
				}
				break;
			}
			case '3':
			{
				float cmp = chair[0].getPrice();
				int cheapNumb = 0;

				for (int i = 1; i < number; i++)
				{
					if (cmp > chair[i].getPrice())
					{
						cmp = chair[i].getPrice();
						cheapNumb = i;
					}
				}

				std::cout << "The most cheap chair is: " << std::endl;
				chair[cheapNumb].displayData();
				break;
			}
			case '4':
			{
				float cmp = table[0].getPrice();
				int expensiveNumb = 0;

				for (int i = 0; i < number; i++)
				{
					if (cmp < table[i].getPrice())
					{
						cmp = table[i].getPrice();
						expensiveNumb = i;
					}
				}
				std::cout << "The most expensive table is: " << std::endl;
				table[expensiveNumb].displayData();
				break;
			}

			case '0':done = 1; break;
			default: done = 0; break;
			}
		}
	deleteData(&table, &chair, number);
}