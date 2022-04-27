#include <iostream>
#include <string>

using namespace std;
 void rekursif (int p, int n)
{
   int a;
   float total, hasil, bil;

   a =2;
   bil =1;
   cout <<bil;
   total =0;
   hasil =0;
   while (!(p>=n))
   {
      if (p % 2==0)
      {
         hasil =-1*(bil/p);
         if (a>=n)
         {
         }
         else
         {
            cout << "+1/"<<a;
         }
      }
      else
      {
         hasil =bil/p;
         if (a>=n)
         {
         }
         else
         {
            cout << "-1/"<<a;         
			}
      }
      total =total+hasil;
      p =p+1;
      a =a+1;
   }
   cout << "\nJumlah = "<<total << endl;}
int main()
{
   string raptor_prompt_variable_zzyz;
   int p, n;

   raptor_prompt_variable_zzyz ="Masukkan n : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> n;
   cout<<endl;
   p =1;
   rekursif(p,n);

   return 0;
}
