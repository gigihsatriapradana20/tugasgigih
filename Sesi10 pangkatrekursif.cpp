#include<iostream>
using namespace std;

long int pangkat(int a, int b);
int main(){
int x,y; 
  cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF "<<endl<<endl;
  cout << "Masukkan nilai X = ";
  cin>>x;
  cout << "Masukkan nilai Y = ";
  cin >> y;
  cout << endl<< x << " Dipangkatkan "<<y<< " = ";
  cout << pangkat(x, y);
  
    
 
  
}
long int pangkat (int a,int b){
if (b==0)
    return(1);
  else
    return (a * pangkat(a,b-1));
}
