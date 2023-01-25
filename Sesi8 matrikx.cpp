#include <iostream>
using namespace std;

int main() {
  int mtrksA[50][50], mtrksB[50][50], result[50][50], p, q, r, s, t, u, v, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama(1 - 50) : ";
  cin >> s;
  cout << "Masukkan jumlah kolom matriks pertama(1 - 50) : ";
  cin >> t;

  cout << "Masukkan jumlah baris matriks kedua(1 - 50) : ";
  cin >> u;
  cout << "Masukkan jumlah kolom matriks kedua(1 - 50) : ";
  cin >> v;

  if (t != u) {
    cout << "Matriks tidak dapat dikalikan satu sama lain ";
  } else {

    cout << "Masukkan Matriks Pertama : " << endl;
    for (p = 0; p < s; p++) {
      for (q = 0; q < t; q++) {
        cout << "Matriks mtrksA" << p + 1 << q + 1 << " : ";
        cin >> mtrksA[p][q];
      }
    }
    cout << "\nMasukkan Matriks Kedua : " << endl;
    for (p = 0; p < u; p++) {
      for (q = 0; q < v; q++) {
        cout << "Matriks mtrksB" << p + 1 << q + 1 << " : ";
        cin >> mtrksB[p][q];
      }
    }
    cout << "\nHasil Penjumlahan Kedua Matriks : " << endl;
    for (p = 0; p < s; p++) {
      for (q = 0; q < t; q++) {
        result[p][q] = mtrksA[p][q] + mtrksB[p][q];
        cout << result[p][q] << "\t";
      }
      cout << endl;
    }
    cout << "\nHasil Pengurangan Kedua Matriks : " << endl;
    for (p = 0; p < s; p++) {
      for (q = 0; q < t; q++) {
        result[p][q] = mtrksA[p][q] - mtrksB[p][q];
        cout << result[p][q] << "\t";
      }
      cout << endl;
    }
    for (p = 0; p < s; p++) {
      for (q = 0; q < v; q++) {
        for (r = 0; r < u; r++) {
          jumlah = jumlah + mtrksA[p][r] * mtrksB[r][q];
        }
        result[p][q] = jumlah;
        jumlah = 0;
      }
    }
    cout << "\nHasil Perkalian Kedua Matriks : " << endl;
    for (p = 0; p < s; p++) {
      for (q = 0; q < v; q++) {
        cout << result[p][q] << "\t";
      }
      cout << endl;
    }
  }
  return 0;
}
