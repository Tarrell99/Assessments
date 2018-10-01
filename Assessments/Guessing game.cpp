#include<iostream>
#include<time.h>
#include <cstdlib>
int main()
{
	srand(time(0));
	char input;
	int gameNumber = rand() % 20 + 1;

	std::cout << "Want to play a game think of a number between 1 and 100 ? " << std::endl;
	system("pause");

	std::cout << " you'll keep useing these for the rest of the game" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "EX: your number -> 5 " << std::endl;
	std::cout << " if the computer guess 6 you would put < so it would look like (5<6)  " << std::endl;
	std::cout << " " << std::endl;
	std::cout << " < if its less then" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " > if its greater then" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "and = if i got it right" << std::endl;
	system("pause");


	system("cls");

	std::cout << "I will guess" << gameNumber << std::endl;
	system("pause");
	
	std::cin >> input;
	while (input != '=')
	{
		
		
		if (input == '>')
		{
			int Biger = gameNumber + 1;
			std::cout << " im going to pick these number   " << gameNumber << "   is these it ?" << std::endl;
			gameNumber = rand() % Biger;
			std::cin >> input;
		}
		if (input == '<')
		{
			gameNumber = rand() % gameNumber + 1;
			std::cout << " im going to pick these number   " << gameNumber << "   is these it ?" << std::endl;
			std::cin >> input;
		}

		if (input == '=')
		{
			std::cout << "Yes I got it Right" << std::endl;
		}
		
	}
	






	system("pause");
}