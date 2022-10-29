#include<iostream>
using namespace std;
 
int main()
{
 	float num1, num2;
 	char operation;
 	cout<<"--Calculator--"<<endl;
 	cin>>num1>>operation>>num2;
 	
 	switch (operation)
	{
	case '-':cout<<num1<<operation<<num2<<"="<<num1 - num2; break;
	case '+':cout<<num1<<operation<<num2<<"="<<num1 + num2; break;
	case '*':cout<<num1<<operation<<num2<<"="<<num1 * num2; break;
	case '/':cout<<num1<<operation<<num2<<"="<<num1 / num2; break;
	case '%':
		if(num1 == int(num1) && num2 == int(num2))
			cout<<num1<<operation<<num2<<"="<<int(num1) % int(num2);
		else
			cout<<"Invalid operation";
		break;
	default: cout<<"Not a valid operation!"<<endl;
						
							//or
		/*
		bool isNUM1Int, isNum2Int;
		isNUm1Int = (int(num1) == num1);    true or false will be stored inside this variable
		isNum2Int = (int(num2) == num2);
		
		if (isNum1Int && isNum2Int)
			cout<<num1<<operation<<num2<<"="<<int(num1) % int(num2);
		else
			cout<<"invalid Operation";
		break;*/
	} 	
}
