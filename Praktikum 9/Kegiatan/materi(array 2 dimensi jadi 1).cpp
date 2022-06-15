#include <iostream>
using namespace std;

int main(){
	int n, brs, klm;
	int data[20];
	int output[40][40];
	int d=0;
	
	cout<<"Masukkan banyaknya bilangan : ";
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		cout<<"Data ke-"<<i<<" = ";
		cin>>data[i];
	}
	
	cout<<"Array 1 dimensi : "<<endl;
	for (int j=0; j<n; j++)
	{
		cout<<data[j]<<" ";
	}
	cout<<endl<<"\n";
	
	cout<<"Masukkan banyaknya baris : ";
	cin>>brs;
	cout<<"Masukkan banyaknya kolom : ";
	cin>>klm;
	
	cout<<"Hasil konversi ke 2 dimensi : "<<endl;
	for (int k=0; k<brs; k++)
	{
		for (int l=0; l<klm; l++)
		{
			output[k][l]=data[d];
			d++;
		}
	}
	
	for (int k=0; k<brs; k++)
	{
		for (int l=0; l<klm; l++)
		{
			cout<<output[k][l]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
