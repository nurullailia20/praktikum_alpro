#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int pilihan;
	float x,y;
	
	Program :
	cout<<"\t PROGRAM KALKULATOR "<<endl;
	cout<<" Menu Operasi : "<<endl;
	cout<<"\t1. Penambahan"<<endl;
	cout<<"\t2. Pengurangan"<<endl;
	cout<<"\t3. Perkalian"<<endl;
	cout<<"\t4. Pembagian"<<endl;
	cout<<"\t5. Perpangkatan"<<endl;
	cout<<"\t6. Akar Pangkat"<<endl;
	
	cout<<" Pilih Menu No : ";
	cin>>pilihan;
	
	if (pilihan<=6)
	{
		cout<<" Bilangan Pertama : ";
			cin>>x;
		cout<<" Bilangan Kedua : ";
			cin>>y;
	
		switch (pilihan)
		{
			case 1:
				cout<<" Hasil "<<x<<" + "<<y<<" = "<<x+y;
				cout<<endl;
				break;
			
			case 2:
				cout<<" Hasil "<<x<<" - "<<y<<" = "<<x-y;
				cout<<endl;
				break;
			
			case 3:
				cout<<" Hasil "<<x<<" * "<<y<<" = "<<x*y;
				cout<<endl;
				break;
			
			case 4:
				cout<<" Hasil "<<x<<" / "<<y<<" = "<<x/y;
				cout<<endl; 
				break;
				
			case 5:
				cout<<" Hasil "<<x<<" ^ "<<y<<" = "<<pow (x,y);
				cout<<endl;
				break;
				
			case 6:
				cout<<" Hasil akar pangkat dari "<<x<<" = "<<sqrt(x)<<endl;
				cout<<" Hasil akar pangkat dari "<<y<<" = "<<sqrt(y)<<endl;
				cout<<endl;
				break;
		
			default:
				for (int i=1; i<=30; i++ )
				{
					cout<<"=";	
				}
		}
	}
		else 
		cout<<" \nPilihan tidak ada pada menu "<<endl;
		for (int i=1; i<=30; i++ )
			{
				cout<<"=";	
			}
		cout<<endl;	
	
	goto Program;
	return 0;
}
	
