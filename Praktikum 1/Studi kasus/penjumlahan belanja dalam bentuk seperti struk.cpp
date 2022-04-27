#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char nama[20];
	string menu[20];
	int banyak, kode, porsi[20], harga[20];
	float subtotal[10], jumlah, diskon, total, bayar;
	
	menu :
	cout<<"\t Daftar Menu kedai X "<<endl;
	cout<<"-----------------------"<<endl;
	cout<<" 1. Ayam Goreng\t | Rp. 17.000,-"<<endl;
	cout<<" 2. Ayam Bakar \t | Rp. 21.000,-"<<endl;
	cout<<"\n------------------------------------"<<endl;
	
	cout<<"Nama customer : ";
	cin>>nama;
	cout<<"Banyak pesanan : ";
	cin>>banyak;
	
	for(int i=1; i<=banyak; i++)
   {
     	cout<<"Pesanan Ke- "<<i<<endl;
      cout<<"Masukkan nomor kode menu : ";
		cin>>kode;
      cout<<"Jumlah Porsi : ";
		cin>>porsi[i];
 
      if (kode==1)
		{
         menu[i]="Ayam goreng";
         harga[i]=17000;
		}
      else if (kode==2)
		{
         menu[i]="Ayam Bakar";
         harga[i]=21000;
		}         
      else
      {
			cout<<"Salah!!,Input Kode Lagi!!"<<endl;
         goto menu;
		}
	}
	
	ofstream struk;
	struk.open("struk.txt");
	if (struk == NULL)
	{
		struk<<"file tidak bisa dibuka";
	} 
	else
	{
		struk<<"\n\t\t STRUK Pemesanan Makanan "<<endl;
		struk<<"\t\t\t KEDAI X "<<endl;
		struk<<"==================================================="<<endl;
		struk<<"Nama Customer :"<<nama<<endl;
		struk<<"---------------------------------------------------"<<endl;
		struk<<"No.\tMenu \t\tHarga \t Porsi \t Subtotal"<<endl;
	
		for (int i=1; i<=banyak; i++)
		{
			subtotal[i] = porsi[i] * harga[i];
			jumlah+=subtotal[i];
	
			struk<<i<<" \t"<<menu[i]<<"\t"<<harga[i]<<" \t "<<porsi[i]<<"\t "<<subtotal[i]<<endl; 
		}
		struk<<"---------------------------------------------------"<<endl;
	
	
		if (jumlah>=45000)
		{
		diskon = 0.1*jumlah;
		}
		
		total = jumlah-diskon;
		struk<<"\t Jumlah \t\t\t: Rp."<<jumlah<<endl;
		struk<<"\t Diskon        \t\t\t: Rp."<<diskon<<endl;
		struk<<"\t Total Bayar  \t\t\t: Rp."<<total<<endl;
	//	struk<<"\t Bayar \t\t\t\t: RP.";
	//	cin>>bayar;
	//	struk<<"\t Kembalian \t\t\t: Rp."<<bayar-total<<endl;
		
		struk<<"\n\n\t~Terimakasih telah berkunjung ke kedai X~";	
	}
}
				
	
	

