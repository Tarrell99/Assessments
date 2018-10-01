#include<iostream>
#include<time.h>
int main()
{
	srand(time(0));
	char input;
	int gameNumber = rand() % 101 + 1;

	std::cout << " What to play a game think of a number between 1 and 100 ? " << std::endl;
	system("pause");

	std::cout << " you'll keep useing these for the rest of the game" << std::endl;
	system("pause");

	std::cout << " < if its less then" << std::endl;
	std::cout << " > if its greater then" << std::endl;
	std::cout << "and = if i got it right" << std::endl;
	std::cout << " you'll keep useing these for the rest of the game" << std::endl;
	system("pause");
	std::cout << "I will guess" << gameNumber << std::endl;
	system("pause");

	std::cin >> input;

}