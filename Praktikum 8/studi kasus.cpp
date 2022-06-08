#include <iostream>
#include <iomanip>
using namespace std;

class Elektronik{
	public:
		void data();
		void hitung();
		
	private:	
		string nama_barang[6]={"Samsung Evo", "SanDisk 16GB", "Logitech M170", "WD Green 120GB", "Garmin Venu SQ", "Epson L3210 AIO"};
		int stok_harga[6][2]={{30,200000},{45,60000},{55,120000},{23,400000},{12,3100000},{14,2500000}};
		int total[10], hasil=0;
};

void Elektronik::data(){
	cout<<"--------------------------------"<<endl;
	cout<<"Nama Barang\tStok\tHarga"<<endl;
	cout<<"--------------------------------"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<nama_barang[i]<<"\t";
		for(int j=0;j<2;j++){
			cout<<stok_harga[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"--------------------------------"<<endl;
}

void Elektronik::hitung(){
	for(int i=0; i<6; i++){
      total[i] = stok_harga[i][0] * stok_harga[i][1];
    }
    
    for (int i=0; i<6; i++){
      hasil  += total[i];
	}
	cout<<"Total Penjualan = Rp. "<<hasil;
}


int main(){
	Elektronik A;
	A.data();
	A.hitung();
}
