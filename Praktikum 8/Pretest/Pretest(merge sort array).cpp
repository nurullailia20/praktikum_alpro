#include <iostream>
#include <conio.h>
using namespace std;

class array{
public:
	input();
	cetak_satu();
  	proses_konversi();
  	cetak_dua();
  	mengurutkan();
  	
private:
	int array[10][10],array2[10];
	int n;
	int m;
	int temp;
};

array::input(){
	cout << " Input jumlah baris : ";cin >> n;
	cout << " Input jumlah kolom : "; cin >> m;
	for (int i=0; i<n; i++)
	{
	for (int j=0; j<m; j++)
	{cout << " Data ke "<<i<<","<<j<<" = "; cin >> array[i][j];}
	}
	}

array::cetak_satu(){
	cout << "\n Bentuk array 2 dimensi :"<<endl;
	for (int i=0; i<n; i++)
	{for (int j=0; j<m; j++)
	{cout << array[i][j]<<"\t";}
	cout << endl;
	}
	}

array::proses_konversi(){
	int k=0;
	for (int i=0; i<n; i++)
	{for (int j=0; j<m; j++)
	{array2[k]= array[i][j];
	k++;}
	}
	}

array::cetak_dua(){
   cout << " Setelah dikonversi menjadi array 1 dimensi :"<<endl;
	for (int k=0; k<m*n; k++)
	{cout << array2[k]<<"  ";}
	}
	
array::mengurutkan(){
	for (int i=0; i<m*n; i++){
		for (int j=0; j<m*n-1; j++){
			if (array2[j] > array2[j+1]){
				temp = array2[j];
				array2[j] = array2[j+1];
				array2[j+1] = temp;
			}
		}
	}
	cout<<"\n Hasil array 1 dimensi yang diurutkan : "<<endl;
	for (int i=0; i<m*n; i++){
		cout<<array2[i]<<"  ";
	}
}

int main (){
array x;
x.input();
x.cetak_satu();
x.proses_konversi();
x.cetak_dua();
x.mengurutkan();
return 0;
}

