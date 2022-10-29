#include<iostream>
#include<list>
using namespace std;

class Vehicle {
public:	
	string Name;
	string ownerName;
	int price;
	list<string> specifications;

Vehicle(string name, string ownername, int Price) {
    Name = name;
    ownerName =ownername;
    price = Price;
}

void getInfo() {
    cout<<"Name: "<<Name<<endl;
	cout<<"ownerName: "<<ownerName<<endl;
	cout<<"price: "<<price<<endl;
	cout<<"Specifications: "<<endl;
	for(string specs : specifications ) {
	    cout<<specs<<endl;
	}
    }
};
int main()
{
	Vehicle car("Honda city", "Sainath", 150);
    car.specifications.push_back("speed");
    car.specifications.push_back("mileage");
	
	Vehicle car2("BMW", "Sainath", 50);
	car2.specifications.push_back("Speed");
	car2.specifications.push_back("mileage");
	
    car.getInfo();
    car2.getInfo();

}
