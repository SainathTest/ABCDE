#include<iostream>
using namespace std;

void function();      //declaration
void addition();

int main() {
	cout<<"Hello from main()\n";
	function();      // calling
	addition();
}

void function() {
	cout<<"Hello from function()\n";     // definition
}

void addition(){
	int a=20,b=25;
	cout<<"20+25="<<a+b;
}
