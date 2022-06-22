#include <iostream>
#include <string>

using namespace std;
 void cekIdent ()
{
   int j;
   int i;
   int br;
   int kl;
   int retur;
   int arr[20][20];//new ??[??+1,??+1];

   if (br==kl)
   {
      i =1;
      while (!(i>br))
      {
         j =1;
         while (!(j>kl))
         {
            if (i==j)
            {
               if (arr[i][j]!=1)
               {
                  retur =false;
               }
               else
               {
                  retur =true;
               }
            }
            else
            {
               if (arr[i][j]!=0)
               {
                  retur =false;
               }
               else
               {
                  retur =true;
               }
            }
            j =j+1;
         }
         i =i+1;
      }
      if (retur==true)
      {
         cout << "Merupakan matriks identitas" << endl;      }
      else
      {
         cout << "Bukan matriks identitas" << endl;      }
   }
   else
   {
      cout << "!Baris dan kolom harus sama" << endl;   }
}
int main()
{
   string raptor_prompt_variable_zzyz;
   int j;
   int i;
   int kl;
   int br;
   int arr[20][20];//new ??[??+1,??+1];

   raptor_prompt_variable_zzyz ="Jumlah baris: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> br;
   raptor_prompt_variable_zzyz ="Jumlah kolom: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> kl;
   i =1;
   while (!(i>br))
   {
      j =1;
      while (!(j>kl))
      {
         cout << "Data ["<<i<<","<<j<<"] = " << endl;
         cin >> arr[i][j];
         j =j+1;
      }
      i =i+1;
   }
   cout << "Matriks" << endl;   i =1;
   while (!(i>br))
   {
      j =1;
      while (!(j>kl))
      {
         cout << arr[i][j]+"  ";         j =j+1;
      }
      cout << " " << endl;      i =i+1;
   }
   cekIdent();

   return 0;
}
