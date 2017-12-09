#include <iostream>
#include <string>
using namespace std;


int main () {
	int array[5], support;
	
	for (int x=0; x<5; x++) {
		cout << "Insert the element "<< x+1 << " of your array:\n";
		cin >> array[x];
	}
	
	cout<< "\nYour original array is:";
	for (int x=0; x<5; x++) {
		cout << " " << array[x] << ",";
	}
	
	
	for (int x=0; x<5; x++) {
		for (int x=0; x<4; x++){
			if (array[x]>array[x+1]) {
				support=array[x];
				array[x]=array[x+1];
				array[x+1]=support;
			}
		}
	}
	
	cout<< "\n\nYour ordered array is:";
	for (int x=0; x<5; x++) {
		cout << " " << array[x] << ",";
	}
		
	
	return 0;
	
}