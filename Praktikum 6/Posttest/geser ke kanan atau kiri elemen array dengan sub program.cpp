#include <iostream>
#include <string>

using namespace std;
void proses()
{
   string raptor_prompt_variable_zzyz;
   int awal, x, a[3];

   raptor_prompt_variable_zzyz ="Masukkan nilai array ke-1 : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> a[0];
   raptor_prompt_variable_zzyz ="Masukkan nilai array ke-2 : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> a[1];
   raptor_prompt_variable_zzyz ="Masukkan nilai array ke-3 : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> a[2];
   cout << "Nilai elemen array 1 2 3 adalah " <<a[0]<<a[1]<<a[2]<< endl;
	raptor_prompt_variable_zzyz ="Tekan 1 untuk geser ke kiri elemen array atau tekan 2 untuk geser ke kanan elemen array";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x;
   awal =0;
   if (x==1)
   {
      awal =a[0];
      a[0] = a[1];
      a[1] = a[2];
      a[2] = awal;
      cout << "Hasil setelah digeser ke kiri adalah "<<a[0]<<a[1]<<a[2]<<endl;   
	}
   else
   {
      awal =a[2];
      a[2] = a[1];
      a[1] = a[0];
      a[0] = awal;
      cout << "Hasil setelah geser ke kanan adalah "<<a[0]<<a[1]<<a[2]<<endl;
	}
}
int main()
{
   proses();
   return 0;
}
