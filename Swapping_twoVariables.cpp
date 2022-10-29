#include<iostream>
using namespace std;

int main()
{
	int a=20,b=10;
	b = a+b-(a=b);
	cout <<"a :"<<a<<endl<<"b :"<<b ;
}
