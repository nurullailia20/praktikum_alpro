#include <iostream>
#include <string>

using namespace std;
int main()
{
   int x;
   int y;

   x =1;
   y =100;
   while (x!=y)
   {
      if (x % 5==0 && x % 7==0)
      {
         cout << "Bilangan yang habis dibagi 5 dan 7 antara 1 sampai 100 adalah "<<x<<endl;
      }
      else
      {
      }
      x =x+1;
   }

   return 0;
}
