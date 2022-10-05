#include <iostream>
using namespace std;

int main(){
  char nama[20];
  char hadiah[300];
  float nilai1 = 0, nilai2 = 0, nilai3 = 0,total = 0, rata;

  cout << "***Program Hitung Nilai Rata Rata***" << endl;

  cout << "Nama Siswa : "; cin >> nama;
  cout << "Nilai Pertandingan 1 : ";
  cin >> nilai1;
  cout << "Nilai Pertandingan 2 : ";
  cin >> nilai2;
  cout << "Nilai Pertandingan 3 : ";
  cin >> nilai3;
  
  rata= (nilai1+nilai2+nilai3)/3;

  cout << endl;
  cout << "Siswa yang bernama " << nama << endl;
  cout << "Memperoleh nilai rata rata " << rata << endl;
  cout << "Dari hasil perlombaan yang diikutinya" << endl;
    if (rata >=85)
      cout << "Hadiah yang didapat adalah Komputer icore5" << hadiah << endl;
  else if (rata >=70)
    cout << "Hadiah yang didapat adalah uang sebesar Rp.2500000" << hadiah << endl;
  else if (rata <70)
    cout << "Hadiah yang didapat adalah hiburan" << hadiah << endl;
  getchar();
  }