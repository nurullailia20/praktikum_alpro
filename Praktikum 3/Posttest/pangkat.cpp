#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int x;
   int y;
   int hasil;

   raptor_prompt_variable_zzyz ="Masukkan nilai x : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x;
   raptor_prompt_variable_zzyz ="Masukkan nilai y : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y;
   hasil =pow(x,y);
   cout << "Hasil dari x pangkat y = "<<hasil << endl;
   return 0;
}
