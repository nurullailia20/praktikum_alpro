#include <iostream>
using namespace std;

class array{
public:
	void input();
	void cetak_satu();
  	void proses_konversi();
  	void cetak_dua();
  	void mengurutkan();
  	void dua_dimensi();
private:
	int array[10][10],array2[10];
	int temp;
	int n;
	int m;
	int d=0;
};

void array::input(){
	cout << " Input jumlah baris : ";
	cin >> n;
	cout << " Input jumlah kolom : "; 
	cin >> m;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout << " Data ke "<<i<<","<<j<<" = "; 
			cin >> array[i][j];
		}
	}
}

void array::cetak_satu(){
	cout << "\n Bentuk array multi dimensi :"<<endl;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout << array[i][j]<<"\t";
		}
	cout << endl;
	}
}

void array::proses_konversi(){
	int k=0;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			array2[k]= array[i][j];
		k++;
		}
	}
}

void array::cetak_dua(){
   	cout << "\n Setelah dikonversi menjadi array 1 dimensi :"<<endl;
	for (int k=0; k<m*n; k++)
	{
		cout << array2[k]<<"  ";
	}
	cout<<endl;
}

void array::mengurutkan(){
	for (int i=0; i<n; i++){
		for (int j=0; j<m*n-1; j++){
			if (array2[j] > array2[j+1]){
				temp = array2[j];
				array2[j] = array2[j+1];
				array2[j+1] = temp;
			}
		}
	}
	cout<<"\n Hasil Data 1 dimensi yang diurutkan : "<<endl;
	for (int i=0; i<m*n; i++){
		cout<<array2[i]<<"  ";
	}
  cout<<endl;
}

void array::dua_dimensi(){
	cout<<"\nHasil konversi ke 2 dimensi : "<<endl;
	for (int k=0; k<n; k++)
	{
		for (int l=0; l<m; l++)
		{
			array[k][l]=array2[d];
			d++;
		}
	}
	
	for (int k=0; k<n; k++)
	{
		for (int l=0; l<m; l++)
		{
			cout<<array[k][l]<<" ";
		}
		cout<<endl;
	}
}

int main (){
array x;
x.input();
x.cetak_satu();
x.proses_konversi();
x.cetak_dua();
x.mengurutkan();
x.dua_dimensi();
return 0;
}
