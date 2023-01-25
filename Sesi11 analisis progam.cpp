#include <iostream> //untuk memasukkan file yang memungkinkan  untuk mengakses fitur. Sementara iostream adalah input, output, stream agar bisa menggunakan instruksi cout.


 using namespace std; //perintah ini digunakan untuk mendeklarasikan/ memberitahukan kepada compiler bahwa kita akan menggunakan semua fungsi/class/file yang terdapat dalam namespace std dan juga agar tidak mengetik std:: secara berulang


 int main ()//adalah fungsi utama dari program
 {//dimulainya program fungsi utama/main
 int *P; //mendeklarasikan pointer p yang menunjuk ke tipe data int
 P=new int; // melakukan alokasi memori

*P=100; // menggunakan memori dan mengisikan nilai ke dalam ruang yang telah dialokasikan

 cout<<"Nilai *P : "<<*P<<endl; // menampilkan nilai yang disimpan dalam pointer p
 delete P; // melakukan dealokasi memori
 return 0; //untuk mengembalikkan nilai 0
 }  //}//berakhirnya program fungsi utama/main
