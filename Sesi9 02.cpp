#include <iostream> //untuk memasukkan file yang memungkinkan  untuk mengakses fitur. Sementara iostream adalah input, output, stream agar bisa menggunakan instruksi cout.

using namespace std; //perintah ini digunakan untuk mendeklarasikan/ memberitahukan kepada compiler bahwa kita akan menggunakan semua fungsi/class/file yang terdapat
//dalam namespace std dan juga agar tidak mengetik std:: secara berulang

int hargaSetelahPajak(int hargaDasar) // ini adalah deklarasi fungsi dengan nama hargaSetelahpajak dan parameter hargaDasar

{ //dimulainya program fungsi
  
return hargaDasar + (hargaDasar * 10/100); // untuk mengembalikkan nilai hargaDasar + hargaDasar *10/100
  
}// berakhirnya program fungsi

int main() // adalah fungsi utama dari program
 
{// dimulainya program fungsi utama/main
   
int hargaMawar = 10000; // deklarasi variabel hargaMawar dengan nilai 10000
int hargaFinalMawar = hargaSetelahPajak(hargaMawar); //deklarasi variable hargaFinalMawar dengan nilai fungi hargaSetelahpajak 
cout << "Harga mawar 1 tangkai Rp." << hargaFinalMawar << endl;
// untuk menampilkan hargaFinalMawar
return 0; // untuk mengembalikkan nilai 0
 
 }//berakhirnya program fungsi utama/main
