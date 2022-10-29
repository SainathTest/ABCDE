#include<iostream>
using namespace std;

main() {
	
	int grade, sum=0;
	
	for (int i=1; i<=3; i++) {
		
		do {
			cout<<"Enter Grade " <<i<<endl;
			cin>>grade;
		} while(grade<1 || grade>5);
		sum = sum+grade;
	}
	
	cout<<"Sum= "<<sum<<endl;
	cout<<"avg grade= "<<sum/3.0<<endl;
}
