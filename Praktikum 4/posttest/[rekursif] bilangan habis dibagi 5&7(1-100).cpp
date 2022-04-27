#include <iostream>
#include <string>

using namespace std;
void rekursif (int x, int y)
{
   if (x<y)
   {
      if (x % 5==0 && x % 7==0)
      {
         cout << "Bilangan yang habis dibagi 5 dan 7 antara 1 sampai 100 adalah "<<x<<endl;
      }      
      x =x+1;
      rekursif(x,y);
   }
   else
	{
      cout<<"End";
   }
}

int main()
{
   rekursif(1,100);
   return 0;
}
