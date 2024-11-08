//program to find countries in Pete's world 
//November 2024
//author Peter Lowe
//estimated time: 120 minutes
//actual time: ??
//Mikey Perrozzi

#include <iostream>

int main()
{
	int region = 0; //user chosen region number
	char letter = ' '; //user chosen letter
	std::cout << "Petes world select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n Rest of the world" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to A or Y to Z" << std::endl; 
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') //not a capital letter
	{
		if (letter < 'a' || letter > 'z') //not a lowerecase letter
			std::cout << "You need to select a letter from A to Z" << std::endl; 
		return 0;
	}
	if (letter == 'y' || letter == 'Y') //written by Mikey 
	{
		if (region == 1)
		{
			std::cout << "There are no 'y's in America" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no 'y's in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no 'y's in Africa" << std::endl; 
		}
		if (region == 4)
		{
			std::cout << "Yemen" << std::endl; 
		}
		if (region == 5)
		{
			std::cout << "There are no 'y's in the Rest of the world" << std::endl; 
		}

	}

	return 1;
}