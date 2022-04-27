#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int th;

   raptor_prompt_variable_zzyz ="Masukkan tahun : ";
   cout << raptor_prompt_variable_zzyz ;
   cin >> th;
   if (th % 4==0)
   {
      cout <<th<< " adalah tahun kabisat" << endl;   }
   else
   {
      cout <<th<< " bukan tahun kabisat" << endl;   }

   return 0;
}
