#include<iostream>
using namespace std;

int sum(int a, int b);
float sum(float a, float b, float c);

int main() {
	cout<<sum(3,4)<<endl;
	cout<<sum(3.5,4.3,5.3);
}

int sum(int a, int b) {
	return a+b;
}

float sum(float a, float b, float c) {
	return a+b+c;
}


