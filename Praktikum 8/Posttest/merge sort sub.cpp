#include <iostream>
#include <string>

using namespace std;
 void sub() {

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
         cout<<"Masukkan data array ke ["<<i<<"]["<<j<<"] :";
         cout <<  endl;
         cin >> data[i][j];
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
         cout<<"Masukkan data array ke ["<<i<<"]["<<j<<"] :";
         cout << endl;
         cin >> data[i][j];
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
   cout << "Data Array setelah digabungkan :" << endl;   i =1;
   while (!(i>18))
   {
      cout << array[i] << endl;      i =i+1;
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
   cout << "Nilai setelah diurutkan = " << endl;   i =1;
   while (!(i>18))
   {
      cout << array[i] << endl;      i =i+1;
   }
}
int main()
{

   sub();

   return 0;
}
