#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int x1;
   int y1;
   int x2;
   int y2;
   int a;
   int b;
   float jarak;
   
   raptor_prompt_variable_zzyz ="Masukkan nilai X1 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x1;
   raptor_prompt_variable_zzyz ="Masukkan nilai Y1 :";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y1;
   raptor_prompt_variable_zzyz ="Masukkan nilai X2 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x2;
   raptor_prompt_variable_zzyz ="Masukkan nilai Y2 : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y2;
   a =pow((x2-x1),2) ;
   b =pow((y2-y1),2) ;
   jarak =sqrt(a+b);
   cout << "Jarak antara dua titik : "<<jarak << endl;
   return 0;
}
