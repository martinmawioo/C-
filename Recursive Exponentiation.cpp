
/*
(Recursive Exponentiation) Write a recursive function power(base, exponent) that,
when invoked, returns baseexponents For example, power(3; 4) = 3 _ 3 _ 3 _ 3.
 Assume that exponent is an integer greater than or equal to 1. Hint:
  The recursion step would use the relationship 
  baseexponents = base _ baseexponents??1 and the terminating condition occurs
   when exponent is equal to 1, because base1 = base

*/

#include <iostream>
using namespace std;

double power(double base, int exponent)
{
	if (exponent == 1)
		return base;
	else
		return base * power(base, exponent - 1);
}

int main()
{
	double base; 
	int degree;
	cout << "Enter base:\n ";
	cin >> base;
	cout<<"Enter exponent:\n";
	cin>> degree;
	cout << "Number " << base << " raised to " << degree << " is: " << power(base,degree) << endl;
}