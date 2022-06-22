#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int j;
   int k;
   int i;
   int temp;
   int b;
  int data[50][50],array[50];
  
 

   cout << "Data Array 1 :" << endl;   i =1;
   while (!(i>3))
   {
      j =1;
      while (!(j>3))
      {
         cout<<"Masukkan Data Array Ke ["<<i<<"]["<<j<<"] :";
         cin>>data[i][j];
         cout << data[i][j] << endl;         j =j+1;
      }
      i =i+1;
   }
   cout << "Data Array 2 : " << endl;   i =4;
   while (!(i>6))
   {
      j =4;
      while (!(j>6))
      {
			cout<<"Masukkan Data Array Ke ["<<i<<"]["<<j<<"] :";
         cin>>data[i][j];
         cout << data[i][j] << endl;         j =j+1;
      }
      i =i+1;
   }
   k =1;
   i =1;
   while (!(i>3))
   {
      j =1;
      while (!(j>3))
      {
         array[k] = data[i][j];
         k =k+1;
         j =j+1;
      }
      i =i+1;
   }
   b =10;
   i =4;
   while (!(i>6))
   {
      j =4;
      while (!(j>6))
      {
         array[b] = data[i][j];
         b =b+1;
         j =j+1;
      }
      i =i+1;
   }
   cout << "Data Array Setelah Digabungkan :" << endl;   i =1;
   while (!(i>18))
   {
      cout << array[i] <<" ";      i =i+1;
   }
   i =1;
   while (!(i>18))
   {
      j =1;
      while (!(j>17))
      {
         if (array[j]>array[j+1])
         {
            temp =array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
         }
         else
         {
         }
         j =j+1;
      }
      i =i+1;
   }
   cout << "\n\nNilai Setelah Diurutkan = " << endl;   i =1;
   while (!(i>18))
   {
      cout << array[i] <<" ";      i =i+1;
   }

   return 0;
}
