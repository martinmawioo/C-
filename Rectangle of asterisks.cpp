#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns;
	char ch;
	//inputing row size
	cout << "\nPlease Enter the Total Number of Rectangle Rows    =  ";
	cin >> rows;
	//inputting column size
	cout << "\nPlease Enter the Total Number of Rectangle Columns =  ";
	cin >> columns;
	//inputing display symbol/ sign
	cout << "\nPlease Enter Any Symbol to Print  =  ";
	cin >> ch;	
	//output dispaly
	//setting the entered rows and columns to display a rectangle	
	cout << "\n-----Rectangle Pattern-----\n";
	for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
		{
           cout << ch;
        }
        cout << "\n";
	}
 	return 0;
}