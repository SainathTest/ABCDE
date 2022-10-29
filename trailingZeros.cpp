#include<iostream>
using namespace std;
	
	int main(){
		
		int n;
		cin>>n;
		int A[n];
		
		for(int i=0; i<n; i++) {
		cin>>A[i];
	}
		int counter=0;
		for(int i=n-1; i>=0; i--) {
			if(A[i]==0)
				counter++;
			else
				break;
		}
		cout<<counter;
	}

