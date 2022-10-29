#include<iostream>
using namespace std;

int main()
{
	//6!= 6*5*4*3*2*1=720
	
	int number;
	cout<<"Number: ";
	cin>>number;
	
	int factorial=1;
	
	for(int i=number; i>=1; i--) {
		factorial = factorial*i;
	}
	cout<< number << "!=" << factorial;
}
