#include<iostream>
using namespace std;

bool isPrimeNumber(int number) {
	for(int i=2; i<number; i++) {
		if(number%i==0)
			return false;
	}
	return true;
}

int main()
{
	/*
	int number;
	cout<<"Number: ";
	cin>>number;
	
	bool isPrimeFlag = isPrimeNumber(number);
	
	if(isPrimeFlag)
		cout<<"Prime number";
	else
		cout<<"Not prime number"; */
	
	for(int i=1; i<=1000; i++) {
		bool isPrime= isPrimeNumber(i);
		if(isPrime)
			cout<<i<<" is prime number\n";
	}
}

