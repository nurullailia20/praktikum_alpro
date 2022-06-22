#include <iostream>
#include <string>

using namespace std;
class urut{
	public:
		void input();
		void tampil_input();
		void satu_dimensi();
		void tampil_satu();
		void mengurutkan();
		void tampil_urut();
		void dua_dimensi();
		void tampil_dua();
		
		string raptor_prompt_variable_zzyz;
   	int m;
   	int n;
   	int i;
   	int j;
   	int k;
   	int y;
   	int arr[20][20];
		int array2[40];
   	int awal;
		
};

 void urut:: input ()
{
	raptor_prompt_variable_zzyz ="Jumlah baris : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> m;
   raptor_prompt_variable_zzyz ="Jumlah kolom : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> n;
 	i =1;
   while (!(i>m))
   {
      j =1;
      while (!(j>n))
      {
         cout<<"Data ["<<i<<","<<j<<"] = ";
         cin >> arr[i][j];
         j =j+1;
      }
      i =i+1;
   }
   tampil_input();
}
 void urut::tampil_input ()
{
   cout << "\nMatriks 2 dimensi" << endl;   
	i =1;
   while (!(i>m))
   {
      j =1;
      while (!(j>n))
      {
         cout << arr[i][j]<<"  ";         
			j =j+1;
      }
      cout << " " << endl;      
		i =i+1;
   }
   satu_dimensi();
}
 void urut::satu_dimensi ()
{
   k =1;
   i =1;
   while (!(i>m))
   {
      j =1;
      while (!(j>n))
      {
         array2[k] = arr[i][j];
         k =k+1;
         j =j+1;
      }
      i =i+1;
   }
   tampil_satu();
}
 void urut::tampil_satu ()
{
   cout << "\nHasil konversi ke matriks 1 dimensi " << endl;   
	k =1;
   while (!(k>m*n))
   {
      cout << array2[k]<<" " << endl;      
		k =k+1;
   }
   mengurutkan();
}
 void urut:: mengurutkan ()
{
   

   k =1;
   while (!(k>(m*n)-1))
   {
      i =m*n;
      while (!(i<k+1))
      {
         if (array2[i]<array2[i-1])
         {
            awal =array2[i];
            array2[i] = array2[i-1];
            array2[i-1] = awal;
         }
         else
         {
         }
         i =i-1;
      }
      k =k+1;
   }
   tampil_urut();
}
 void urut:: tampil_urut ()
{
   cout << "\nMatriks 1 dimensi yang sudah diurutkan" << endl;  
	y =1;
   while (!(y>m*n))
   {
      cout << array2[y]<<" " << endl;      
		y =y+1;
   }
   dua_dimensi();
}
 void urut:: dua_dimensi ()
{   
   k =1;
   i =1;
   while (!(i>m))
   {
      j =1;
      while (!(j>n))
      {
         arr[i][j] = array2[k];
         k =k+1;
         j =j+1;
      }
      i =i+1;
   }
   i =i+1;
   tampil_dua();
}
 void urut:: tampil_dua()
{
   cout << "\nHasil konversi ke matriks 1 dimensi " << endl;   
	i =1;
   while (!(i>m))
   {
      j =1;
      while (!(j>n))
      {
         cout << arr[i][j]<<"  ";         
			j =j+1;
      }
      cout << " " << endl;      
		i =i+1;
   }
}
int main()
{
	urut x;
	x.input();  

   return 0;
}
