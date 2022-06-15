#include <iostream>
using namespace std;

class Buku{
public:
	void input();
	void satu_dimensi();
	void mengurutkan();
	void dua_dimensi();
	
private:
	int n, brs, klm, temp;
	int data[40];
	int output[40][40];
	int d=0;
};

void Buku::input(){
	cout<<"Masukkan banyaknya buku : ";
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		cout<<"Nomor buku ke-"<<i+1<<" = ";
		cin>>data[i];
	}
}

void Buku::satu_dimensi(){
	cout<<"\nData 1 dimensi : "<<endl;
	for (int j=0; j<n; j++)
	{
		cout<<data[j]<<" ";
	}
	cout<<endl<<"\n";
}

void Buku::mengurutkan(){
	for (int i=0; i<n; i++){
		for (int j=0; j<n-1; j++){
			if (data[j] > data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	cout<<"\n Hasil Data 1 dimensi yang diurutkan : "<<endl;
	for (int i=0; i<n; i++){
		cout<<data[i]<<"  ";
	}
  cout<<endl;
}

void Buku::dua_dimensi(){
	cout<<"\nMasukkan banyaknya baris : ";
	cin>>brs;
	cout<<"Masukkan banyaknya kolom : ";
	cin>>klm;
	cout<<endl;
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
}

int main(){
	Buku x;
	x.input();
	x.satu_dimensi();
	x.mengurutkan();
	x.dua_dimensi();
	return 0;
}
