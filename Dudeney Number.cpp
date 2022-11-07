
/*(Dudeney Numbers) A Dudeney number is a positive integer that is a perfect
cube such that the sum of its digits is equal to the cube root of the number.
 There are exactly seven such integers. Write a function isDudeney to test if 
 a parameter number is a Dudeney number. Use this function in a program that 
 determines and prints the _rst 3 Dudeney integers. Then challenge the power
  of your computer by _nding all 7 Dudeney numbers. Make use of the
<cmath> cube root function, cbrt.
*/
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function that returns true if
// n is a Dudeney number
bool isDudeney(int n)
{
	int cube_rt = int(round((pow(n, 1.0 / 3.0))));

	// If n is not a perfect cube
	if (cube_rt * cube_rt * cube_rt != n)
		return false;

	int dig_sum = 0;
	int temp = n;
	while (temp > 0) {

		// Last digit
		int rem = temp % 10;

		// Update the digit sum
		dig_sum += rem;

		// Remove the last digit
		temp /= 10;
	}

	// If cube root of n is not equal to
	// the sum of its digits
	if (cube_rt != dig_sum)
		return false;

	return true;
}

// Driver code
int main()
{
	int n;
	cout<<"Enter a Dudeney Number:\n";
	cin>>n;
	if (isDudeney(n))
		cout << "Yes!! it's a Dudeney Number:\n";
	else
		cout << "No!! it's not a Dudeney Number:\n";

	return 0;
}
