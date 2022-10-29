#include<iostream>
using namespace std;

int main()
{
	//Count digits of a number
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	
	if(number == 0)
		cout<<"you have entered 0.";
	else
	{
		if(number<0)
			number = -1*number;
			
		int counter = 0;
		while(number>0)
		{
			number = number/10;
			counter++;
		}
		cout<<"Number contains "<<counter<<" digits.";
	}
	
}
