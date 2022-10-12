#include<iostream>
using namespace std;

int main()
{
  int prima,a,b = 0;

  cout<<"Masukkan bilangan = ";
  cin >> prima;

  for (a = 2; a < prima/2; a++)
  {
    if (prima%a == 0)
    {
    b = 1;
    break;
    }
  }
  if (b == 0)
    cout <<"Bilangan "<< prima <<" adalah Termasuk Bilangan Prima\n";
  else 
    cout <<"Bilangan "<< prima <<" adalah Bukan Termasuk Bilangan Prima\n";
  
  return 0;
}