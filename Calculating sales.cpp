#include<iostream>
using namespace std;
int main()
{
	int product=0;
	double sum;
	int number=0;
	int quantity;
	int price;
	cout<<"Enter  product number: \n";
	cin>>product;
	cout<<"Enter quantity: \n";
	cin>>quantity;
//	while(number != -1){	
	switch(number)
	{
	case 1:
		price=2.98;
		break;
	case 2:
		price=4.50;
		break;
	case 3:
		price=9.98;
		break;
	case 4:
		price= 4.49;
		break;
	case 5:
		price=6.68;
		break;	
	default:
		cout<<"Enter a valid product!! \n";
		//break;
	}
		sum=price*quantity;
		cout<<"Total value is: "<<sum<<endl;
//	}
	return 0;
}