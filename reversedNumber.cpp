#include<iostream>
using namespace std;

int main() {
	//Reversing number
	
	int number, reversedNumber=0; //321
	cout <<"Number: ";
	cin >> number; //0
	
	while(number!=0) {
		reversedNumber *= 10;
		reversedNumber += number%10;
		number /= 10;
	}
	
	cout<< "Reversed: "<<reversedNumber;
}
