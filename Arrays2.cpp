#include<iostream>
using namespace std;

int getMin(int numbers[],int size) {
	int min = numbers[0];
	for(int i=1; i<size; i++) {
		if(numbers[i]<min)
			min = numbers[i];
	}
	return min;
}

int getMax(int numbers[],int size) {
	int max = numbers[0];
	for(int i=1; i<size; i++) {
		if(numbers[i]>max)
			max = numbers[i];
	}
	return max;
}

void getMinAndMax(int numbers[],int size, int* min, int* max) {
	for(int i=1; i<size; i++) {
		if(numbers[i]<*min)
			*min=numbers[i];
		if(numbers[i]>*max)
			*max=numbers[i];
	}
}


int main()
{
	int numbers[5] = {2,54,4,3,-1};
	int numbers1[10] = {12,32,12,1,23,2,5,4,6,81};
//	cout<<"min is "<<getMin(numbers,5)<<endl;
//	cout<<"max is "<<getMax(numbers,5)<<endl;
//	cout<<"min is "<<getMin(numbers1,10)<<endl;
//	cout<<"max is "<<getMax(numbers1,10)<<endl;
	int max=numbers[0];
	int min=numbers[0];
	int max1=numbers1[0];
	int min1=numbers1[0];
	
	getMinAndMax(numbers ,5 , &min, &max);
	getMinAndMax(numbers1 ,10 , &min1, &max1);
	
	cout<<"min is "<<min<<endl;
	cout<<"max is "<<max<<endl;
	
	cout<<"min is "<<min1<<endl;
	cout<<"max is "<<max1<<endl;
	
	

}
