#include <iostream>
using namespace std;

class data{
	public:
		void input();
		void proses();
		void output();
		
		int x;
  		int nim [5];
  		string nama [5];
  		int *pInt=nim;
  		string *qInt=nama;
	
};

void data::input(){
	cout << "Masukan jumlah data :";
    cin >> x;
    cout<<endl;
    for (int i=0; i<x; i++)
    {
      cout<<"Masukkan NIM : ";
      cin>>nim[i];
      cin.ignore();
      cout<<"Masukkan NAMA: ";
      getline(cin, nama[i]);
      cout<<endl;
    }
    cout<<endl;
}

void data::output(){
	cout<<"==================================\n";
   cout<<"Daftar Mahasiswa : "<<endl;
   cout<<"No.\tNIM\tNama"<<endl;
   cout<<"---------------------------"<<endl;
   for (int n=0; n<x; n++)
   {
      cout<<n+1<<".\t"<<*(pInt)<<"\t";
      pInt++;
      cout<<*(qInt)<<endl;
      qInt++;
  	}
}


int main() {
  data mhs;
  mhs.input();
  mhs.output();
  
}
