#include<iostream>
using namespace std;

int main() {
	int deret[] = {9, 2, 1, 4, 11, 10, 18, 6};
	int length = sizeof(deret)/sizeof(*deret);
	int temp;
	
	cout<<"Deret awal : ";
	for (int i = 0; i < length; i++) {
		cout<<deret[i]<<" ";
	}
	cout<<endl;
	
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length-1; j++) {
			if (deret[j] > deret[j+1]) {
				temp = deret[j];
				deret[j] = deret[j+1];
				deret[j+1] = temp;
			}
		}
		cout<<endl;
		cout<<"Tahap ke-"<<i+1<<" : ";
		
		for(int i = 0; i < length; i++) {
			cout<<deret[i]<<" ";
		}
	}
}
