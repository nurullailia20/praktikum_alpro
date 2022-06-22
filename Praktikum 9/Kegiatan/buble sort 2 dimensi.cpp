#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int awal;
   int y;
   int j;
   int k;	
	int i;
   int n;
   int m;
   int array2[40];
   int arr[20][20];

   raptor_prompt_variable_zzyz ="Jumlah baris : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> m;
   raptor_prompt_variable_zzyz ="Jumlah kolom : ";
   cout << raptor_prompt_variable_zzyz ;
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
   cout << "\nHasil konversi ke matriks 1 dimensi " << endl;   
	k =1;
   while (!(k>m*n))
   {
      cout << array2[k]<<" ";      
		k =k+1;
   }
   cout << " " << endl;   
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
         i =i-1;
      }
      k =k+1;
   }
   cout << "\nMatriks 1 dimensi yang sudah diurutkan" << endl;   
	y =1;
   while (!(y>m*n))
   {
      cout << array2[y]<<" ";      
		y =y+1;
   }
   cout << " " << endl;   
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
   cout << "\nHasil konversi ke 2 dimensi setelah diurutkan " << endl;   
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

   return 0;
}
