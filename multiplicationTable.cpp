#include<iostream>
using namespace std;

int main() {
	
	int number;
	cout<<"Number: ";
	cin>>number;
	
	for(int i=1;i<=number ;i++) {
		for(int j=1;j<=10;j++) {
			cout<<i<<"*"<<j<<"="<<i*j<<endl;
		}
		cout<<endl;
	}
}
