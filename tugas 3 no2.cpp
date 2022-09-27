#include <iostream>
using namespace std;
int main () {

double x, y, a, b, phi;

phi=3.1415;


cout <<"masukan nilai jari-jari tabung = ";
cin >> x ;
cout <<"masukan nilai tinggi tabung = ";
cin >> y ;

a = phi*x*x;
b = a*y;

cout <<"luas tabung adalah " << a << endl;
cout <<"volume tabung adalah " << b << endl;
getchar();

}