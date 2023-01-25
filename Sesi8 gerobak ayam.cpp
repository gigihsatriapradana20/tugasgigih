#include <iostream>
using namespace std;

int main() {
  int harga[10], x, y, u[10], jmlh[10], th, pjk;
  char jp;
  string tipe[10];
  cout << "GEROBAK FRIED CHICKEN" << endl;
  cout << "----------------------" << endl;
  cout << "Kode\tJenis\tHarga" << endl;
  cout << "----------------------" << endl;
  cout << " D\tDada\t Rp.2500" << endl;
  cout << " P\tPaha\t Rp.2000" << endl;
  cout << " S\tSayap\t Rp.1500" << endl;
  cout << "----------------------" << endl;
  cout << "Banyak Jenis = ";
  cin >> x;

  for (y = 0; y < x; y++) {
    cout << "Jenis ke - " << y + 1 << endl;
  ulang:
    cout << "Jenis Potong [D/P/S] : ";
    cin >> jp;
    if (jp == 'D' || jp == 'd') {
      u[y] = 2500;
      tipe[y] = "Dada";
    } else if (jp == 'P' || jp == 'p') {
      u[y] = 2000;
      tipe[y] = "Paha";
    } else if (jp == 'S' || jp == 's') {
      u[y] = 3500;
      tipe[y] = "Sayap";
    } else {
      cout << "Input invalid.\n";
      goto ulang;
    }
    cout << "Banyak Potong : ";
    cin >> jmlh[y];

    harga[y] = jmlh[y] * u[y];
  }
  cout << "\t\t GEROBAK FIRED CHICKEN " << endl;
  cout << "-----------------------------------------" << endl;
  cout << "No.\tJenis\t Harga    Banyak    Jumlah" << endl;
  cout << "\tPotong \tSatuan    Beli      Harga " << endl;
  cout << "-----------------------------------------" << endl;
  for (y = 0; y < x; y++) {
    cout << y + 1 << "   " << tipe[y] << "\t  " << u[y] << "     " << jmlh[y]
         << "        Rp." << harga[y] << endl;
    th += harga[y];
  }
  pjk = th * 0.1;
  cout << "-----------------------------------------" << endl;
  cout << "\t\t\t\t\t\tHarga total = " << th - 1<<endl;
  cout << "\t\t\t\t\t\tPajak 10%   = " << pjk<<endl;
  cout << "\t\t\t\t\t\tTotal Bayar = " << th + pjk - 1<<endl;
  return 0;
}
