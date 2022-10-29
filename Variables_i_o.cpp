#include<iostream>
using namespace std;

int main()
{
	float annualSalary,Savings;
	cout << "Enter your annual salary ";
	cin >> annualSalary; 
	float monthlySalary= annualSalary/12;
	cout << "Your monthly salary is "<< monthlySalary <<endl;
	//Savings = annualSalary*10;
	cout << "In 10 years you will have "<<annualSalary*10;
} 
