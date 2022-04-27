#include <iostream>
using namespace std;

class kuliah{
	public :
		int i=1;
		string mk[100];
		string nama,nim;
		double sks1, sks2, sks3, jumlah=0,jum_sks,jum_dis,n,diskon;
		int s[100];
		
		void ulang(int);
		int bayar(int );
		void keluar();
		void input ();		
};

void kuliah::input(){
	cout<<"nama : "; cin>>nama;
	cout<<"nim  : "; cin>>nim;
	cout<<"masukkan jumlah matkul :"; cin>>n;
}

void kuliah::ulang(int n){
	if(i<=n){
		cout<<"matkul "<<i<<":"; cin>>mk[i];
		cout<<"sks : "; cin>>s[i];
		jum_sks += s[i];
    jumlah = jum_sks * 120000;
		i++;
		ulang(n);
	}
}

void kuliah::keluar(){
	cout<<"==============================="<<endl;
	cout<<"Nama :"<<nama<<endl;
	cout<<"Nim : "<<nim<<endl;

	cout<<"No		Matkul		SKS :"<<endl;
	for(int i=1; i<=n; i++){
		cout<<i<<"  \t\t"<<mk[i]<<"  \t\t"<<s[i]<<endl;
	}
	cout<<"Total SKS : "<<jum_sks<<endl;
	cout<<"Total Bayar : "<<jumlah<<endl;
	diskon = jumlah * 0.15;
  jum_dis = jumlah - diskon;
	cout<<"Total Bayar setelah diskon : "<<jum_dis<<endl;
}

int main(){
	kuliah X;
	X.input();
	X.ulang(X.n);
	X.keluar();
	
}
