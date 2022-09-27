#include <iostream>
using namespace std;
#define phi 3.1415;
int main () 
{

double jari_jari, tinggi, luas, volume;

cout << "Masukan nilai jari-jari tabung = ";
cin >> jari_jari ;
cout << "Masukan nilai tinggi tabung = ";
cin >> tinggi ;

luas = jari_jari*jari_jari*phi;
volume = luas*tinggi;

cout << "Luas Tabung adalah " << luas << endl;
cout << "Volume Tabung adalah " << volume << endl;
return 0;
}