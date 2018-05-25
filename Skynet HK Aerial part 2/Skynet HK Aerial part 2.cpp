
// Skynet HK-Aerial.cpp : Defines the entry point for the console application.
// 03 Assignment: Skynet HK-Aerial
// Write a program in C++ for the Skynet HK - Aerial
// You should initialize a grid search of 8x8.
// On each run, your program should choose a random numbered square on the grid numbered 1 - 64 to indicate where the enemy is located.
// The enemy does not move in this simulation.
// This program should be able to search for ground based enemies faster then when in the current linear search HK mode, however, you do not need to code in this comparison.
// This program is for it's internal AI only and does not require human other other AI players.
// This program should keep track of each turn and display this.
// This program should use an unpredictable search pattern to the human on the ground.
// The AI should used a Binary Search Pattern.
// This program should loop unitl the Grid that the enemy is on is found by the Skynet HK - Aerial.At that point the found and engaging enemy status is displayed along with other information such as how long it took to find them by showing how many grids the HK searched before finding the enemy, what where the cordinates of the grids the HK looked at, and how large the search grid was.
// This code will be upgraded often to stay ahead of the enemy.Be sure to comment each line of code except cout statements, write very readable code using good coding standards.
// The Grid does not need to be displayed.
// Put this project into your GitHub and take a screenshot of it.


// Standard Input / Output Streams Libraries
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Std stands for standard library
using namespace std;

//The program always start at the main function
//This also applies to C#, Java, and other languages
//The int before the main stands for integer
//Integer is the return type
//The end of the main function is return 0;
//0 is an integer, that data type must match
//If you see the void main () , you will only see a return.
int main()
{
	srand(static_cast<unsigned int>(time(0)));

	//Integers
	int enemyLocation = rand() % 64 + 1;
	int triesBinaryAI = 0;
	int triesLinearAI = 0;
	int triesHumanAI = 0;
	int triesRandomAI = 0;
	int binaryPredictionAI = 0;
	int PredictionHuman = 0;
	int PredictionLinearAI = 0;
	int PredictionRandom = 0;
	int searchGridHighNumberAI = 64;
	int searchGridLowNumberAI = 1;

	//Header
	cout << "\8X8 Grid Enemy Search \n\n";
	cout << "(Executing Binary search...)" << endl;
	do
	{

		/*cout << "Enter a guess: ";
		cin >> guess;*/
		// Algorithm code to use for our binary search

		binaryPredictionAI = ((searchGridHighNumberAI - searchGridLowNumberAI) / 2) + searchGridLowNumberAI;
		++triesBinaryAI;
		cout << "=================================================== \n" << endl;
		cout << "Binary search results." << endl;
		if (binaryPredictionAI > enemyLocation)
			// Cout for number guess being too high
		{
			cout << binaryPredictionAI << " is too high, enemy location is at " << enemyLocation << endl;
			cout << "Resetting search grid high number from " << searchGridHighNumberAI;
			searchGridHighNumberAI = binaryPredictionAI;
			cout << " to " << searchGridHighNumberAI << endl;
		}
		else if (binaryPredictionAI < enemyLocation)
			// Cout for number guess being too low
		{
			cout << binaryPredictionAI << " is too low, enemy location is at " << enemyLocation << endl;
			cout << "Resetting search grid low number from " << searchGridLowNumberAI;
			searchGridLowNumberAI = binaryPredictionAI;
			cout << " to " << searchGridLowNumberAI << endl;
		}
		else if (binaryPredictionAI == enemyLocation)
			// Cout for location found
		{
			cout << "Found location! Accomplished in " << triesBinaryAI << " attempts\n";
			cout << binaryPredictionAI << " was the binary guess, enemy location is at " << enemyLocation << endl;
		}
		else
			// Cout for error
		{
			cout << "\Error, something went wrong!" << endl;
		}
	} while (binaryPredictionAI != enemyLocation);
	cout << "=================================================== \n" << endl;
	cout << "\n(Executing Linear search...)" << endl;
	do
	{

		/*cout << "Enter a guess: ";
		cin >> guess;*/
		// Algorithm code to use for our binary search.
		// Lines 95 and 96 mean the exact same thing.

		PredictionLinearAI = PredictionLinearAI + 1;
		/*PredictionLinearAI++;*/ 


		++triesLinearAI;
		cout << "=================================================== \n" << endl;
		cout << "Linear search results." << endl;
		if (PredictionLinearAI > enemyLocation)
			// Cout for number guess being too high
		{
			cout << PredictionLinearAI << " is too high, enemy location is at " << enemyLocation << endl;

		}
		else if (PredictionLinearAI < enemyLocation)
			// Cout for number guess being too low
		{
			cout << PredictionLinearAI << " is too low, enemy location is at " << enemyLocation << endl;

		}
		else if (PredictionLinearAI == enemyLocation)
			// Cout for location found
		{
			cout << "Found location! Accomplished in " << triesLinearAI << " attempts\n";
			cout << PredictionLinearAI << " was the linear guess, enemy location is at " << enemyLocation << endl;
		}
		else
			// Cout for error
		{
			cout << "\Error, something went wrong!" << endl;
		}
	} while (PredictionLinearAI != enemyLocation);
	cout << "=================================================== \n" << endl;
	cout << "\n(Executing Random search...)" << endl;
	do
	{

		/*cout << "Enter a guess: ";
		cin >> guess;*/
		// Algorithm code to use for our binary search.
		// Lines 95 and 96 mean the exact same thing.

		PredictionRandom = rand() % 64 + 1;
		/*PredictionLinearAI++;*/


		++triesRandomAI;
		cout << "=================================================== \n" << endl;
		cout << "Random search results." << endl;
		if (PredictionRandom > enemyLocation)
			// Cout for number guess being too high
		{
			cout << PredictionRandom << " is too high, enemy location is at " << enemyLocation << endl;

		}
		else if (PredictionRandom < enemyLocation)
			// Cout for number guess being too low
		{
			cout << PredictionRandom << " is too low, enemy location is at " << enemyLocation << endl;

		}
		else if (PredictionRandom == enemyLocation)
			// Cout for location found
		{
			cout << "Found location! Accomplished in " << triesRandomAI << " attempts\n";
			cout << PredictionRandom << " was the random guess, enemy location is at " << enemyLocation << endl;
		}
		else
			// Cout for error
		{
			cout << "\Error, something went wrong!" << endl;
		}
	} while (PredictionRandom != enemyLocation);
	cout << "=================================================== \n" << endl;
	cout << "\n(Executing Human search...)" << endl;
	do
	{

		cout << "Enter a guess: ";
		cin >> PredictionHuman;
		// Algorithm code to use for our binary search
		++triesHumanAI;
		cout << "=================================================== \n" << endl;
		cout << "Human search results." << endl;
		if (PredictionHuman > enemyLocation)
			// Cout for number guess being too high
		{
			cout << PredictionHuman << " is too high, enemy location is at " << enemyLocation << endl;
			cout << "Resetting search grid high number from " << searchGridHighNumberAI;
			searchGridHighNumberAI = PredictionHuman;
			cout << " to " << searchGridHighNumberAI << endl;
		}
		else if (PredictionHuman < enemyLocation)
			// Cout for number guess being too low
		{
			cout << PredictionHuman << " is too low, enemy location is at " << enemyLocation << endl;
			cout << "Resetting search grid low number from " << searchGridLowNumberAI;
			searchGridLowNumberAI = PredictionHuman;
			cout << " to " << searchGridLowNumberAI << endl;
		}
		else if (PredictionHuman == enemyLocation)
			// Cout for location found
		{
			cout << "Found location! Accomplished in " << triesHumanAI << " attempts\n";
			cout << PredictionHuman << " was the human guess, enemy location is at " << enemyLocation << endl;
		}
		else
			// Cout for error
		{
			cout << "\Error, something went wrong!" << endl;
		}
	} while (PredictionHuman != enemyLocation);

	cout << "--------------------------------------------------- \n" << endl;
	cout << "--------------------------------------------------- \n" << endl;
	cout << "Amount of attempts..." << endl;
	cout << "Binary: " << triesBinaryAI << endl;
	cout << "Linear: " << triesLinearAI << endl;
	cout << "Random: " << triesRandomAI << endl;
	cout << "Human: " << triesHumanAI << endl;
	cout << "--------------------------------------------------- \n" << endl;
	cout << "--------------------------------------------------- \n" << endl;

	// Stops debugger from closing
	system("pause");

	return 0;
}