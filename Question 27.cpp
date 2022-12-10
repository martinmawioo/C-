// CPP program to find if number is
// a Special Two-Digit number or not
#include<bits/stdc++.h>
using namespace std;

// function to find if number
// is special or not
void specialNumber(int n)
{
	// Checking whether entered
	// number is 2 digit or not
	if (n < 10 || n > 99)
		cout << "Please enter a two-digit integer:\n"
			<< "Invalid input! Try again...";
	else
	{
		// Finding the first digit
		int first = n / 10;
		
		// Finding the last digit
		int last = n % 10;
		
		// Finding the sum of
		// the digits
		int sum = first + last;
		
		// Finding the product
		// of the digits
		int pro = first * last;
		
		if ((sum + pro) == n)
		{
			cout << n <<" is a Special "
				<< "Two-Digit Number";
		}
		else
		{
			cout << " The integer you entered is valid ";
				
		}
	}
}

// Driver Code
int main()
{
	int n;
	cout<<"Enter a two digit number: ";
	cin>>n;
	
	// function calling
	specialNumber(n);
	return 0;
}
