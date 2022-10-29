#include<iostream>
using namespace std;

int main()
{
	float weight, height, bmi;
	cout<< "weight(kg), height(m): ";
	cin>> weight >> height;
	bmi=weight / (height*height);
	
	if(bmi<18.5)
		cout<<"You are underweight\n";
	else if(bmi>25)
		cout<<"You are overweight\n";
	else
		cout<<"Your weight is normal\n";
	
	cout<<"Your bmi is "<<bmi;
}
