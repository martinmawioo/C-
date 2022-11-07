/*(Guess-the-Number Game) Write a program that plays the game of \guess the
number" as follows: Your program chooses the number to be guessed by selecting an integer
at random in the range 1 to 1000. The program then displays the following:
I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 1000
	cout << "I have a number between 1 and 1000\n\n";
	cout<<"Can you guess my number?\n\n";
	
		cout << "Please type your first guess : ";
		cin >> guess;
		tries++;

/*	do
	{
		cout << "Please type your first guess : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "No in range!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);*/

//	return 0;

}
